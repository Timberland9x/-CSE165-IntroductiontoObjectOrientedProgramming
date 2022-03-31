#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

class LinkedList
{
public:
    struct Link
    {
        void *data;
        Link *next;

        void initialize(void *dat, Link *nxt)
        {
            data = dat;
            next = nxt;
        }
    } * head;
    LinkedList()
    {
    }
    LinkedList(double val)
    {
        add(val);
    }

    void add(double val)
    {
        // cout << "adding: " << val << endl;
        Link *link = new Link;
        // link = l;

        link->initialize(new double(val), head);
        head = link;
    }

    void print()
    {
        // cout << "Printing Linked list" << endl;
        // cout << "Data in head: " << head->data << endl;
        //  void *result = head->data;
        //  Link *oldHead = head;
        //  head = head->next;

        while (head != 0)
        {
            void *result = head->data;
            Link *oldHead = head;
            head = head->next;
            // delete oldHead;
            cout << *(double *)result << endl;
        }
    }

    void cleanup()
    {
        if (head == 0)
        {
            std::cout << "Stack is empty" << endl;
        }
        else
        {
            std::cout << "Stack is not empty" << endl;
        }
    }
};
#endif
