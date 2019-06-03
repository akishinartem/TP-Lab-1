#pragma once
#include <iostream>
#include "elem.h"

class Queue {
	elem *Head;
	elem *Tail;
	int k;
public:
	Queue();
	~Queue();

	int GetK();
	elem* GetHead();
	elem* GetTail();
	void SetHead(elem *Val);
	void SetTail(elem *Val);

	void Add();
	void Del();
	void Print();

	bool operator!();
	Queue& operator++();
	Queue& operator--(int);

	friend Queue& operator++(Queue &op1, int usrVal);
	friend Queue& operator--(Queue &op1);
};
