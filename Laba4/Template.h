#pragma once
#include <iostream>
using namespace std;

template <typename X>
class Queue {
	X* Value;
	int k;
public:
	Queue();
	~Queue();
	Queue(int new_k);

	X* GetVal();
	int GetK();
	void Print();

	bool operator!=(Queue<X>& op1);
	bool operator==(Queue<X>& op1);
	X operator[](int usrVal);
};
#include "Template.cpp";