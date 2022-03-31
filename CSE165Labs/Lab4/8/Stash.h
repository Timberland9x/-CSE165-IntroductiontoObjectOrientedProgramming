#ifndef STASH_H
#define STASH_H

#include <cassert>
#include <iostream>

using namespace std;
struct Stash
{
	int size;	  // Size of each space
	int quantity; // Number of storage spaces
	int next;	  // Next empty space
	int amtinflate;

	// Dynamically allocated array of bytes:
	unsigned char *storage;

	// Functions!
	void initialize(int sz)
	{
		size = sz;
		quantity = 0;
		storage = 0;
		next = 0;
		amtinflate = 0;
	}

	void cleanup()
	{
		if (storage != 0)
		{
			std::cout << "freeing storage" << std::endl;
			delete[] storage;
		}
	}

	int add(const void *element)
	//(a) you will have a new integer member to store
	// the desired increment to be used duringre-allocation
	//(not a fixed 100 value as in the book)
	{
		if (next >= quantity) // Enough space left?
			inflate(amtinflate);

		// Copy element into storage,
		// starting at next empty space:
		int startBytes = next * size;
		unsigned char *e = (unsigned char *)element;

		for (int i = 0; i < size; i++)
		{
			storage[startBytes + i] = e[i];
			// cout << "storage[startBytes + i]: " << storage[startBytes + i] << endl;
		}
		next++;

		return (next - 1); // Index number
	}

	void *fetch(int index)
	{
		// Check index boundaries:
		assert(0 <= index);

		if (index >= next)
			return 0; // To indicate the end

		// Produce pointer to desired element:
		return &(storage[index * size]);
	}

	int count()
	{
		return next; // Number of elements in CStash
	}

	void inflate(int increase)
	{
		//(b) you will have another integer member variable to
		// count the number of re-allocations
		//(calls to the inflate method) the Stash structure needed during its use.
		amtinflate++;
		assert(increase > 0);

		int newQuantity = quantity + increase;
		int newBytes = newQuantity * size;
		int oldBytes = quantity * size;
		unsigned char *b = new unsigned char[newBytes];

		for (int i = 0; i < oldBytes; i++)
			b[i] = storage[i]; // Copy old to new

		delete[] storage; // Old storage
		storage = b;	  // Point to new memory
		quantity = newQuantity;
	}
}; ///:~

#endif