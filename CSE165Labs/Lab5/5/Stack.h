#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Stack
{
	Stack()
	{
	}
	Stack(int n)
	{
		double j = 1.0;
		for (int i = 0; i < n; i++)
		{
			// cout << j << " " << endl;
			push(j);
			j = j + 0.1;
		}
	}
	struct Link
	{
		double *data;
		Link *next;

		void initialize(double *dat, Link *nxt)
		{
			data = dat;
			next = nxt;
		}

	} * head;

	void push(double dat)
	{
		// cout << dat << " " << endl;
		Link *newLink = new Link;
		newLink->initialize(new double(dat), head);
		head = newLink;
	}
	void *peek()
	{
		if (head == 0)
		{
			std::cout << "Stack is empty";
		}
		return head->data;
	}

	void *pop()
	{
		if (head == 0)
			return 0;

		void *result = head->data;
		Link *oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}

	void cleanup()
	{
		if (head == 0)
		{
			std::cout << "Stack is empty";
		}
		else
		{
			std::cout << "Stack is not empty";
		}
	}

	// void deletecb(void *pt)
	// {
	// }
	// void Stack::setDeleteCallback(void (*delcb)(void *pt))
	// {
	// }
	~Stack()
	{
		double *s;
		while ((s = (double *)pop()) != 0)
		{
			cout << *s << " ";
			// delete s;
		}
		// cout << "Deleting Stack" << endl;
	}
};
#endif