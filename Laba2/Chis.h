#pragma once

#include <iostream>
#include "elem.h"

class Chis {
	elem *ptr;
	int k;
public:
	Chis();
	~Chis();

	elem* Getptr();
	int GetK();
	void Setptr(elem *Val);

	void Add();
	void Del();
	void Print();
	
	Chis& operator+();
	bool operator<(Chis &op1);
	bool operator>(Chis &op1);

	friend Chis& operator-(Chis &op1, Chis &op2);
	friend bool operator==(Chis &op1, Chis &op2);
	friend bool operator!=(Chis &op1, Chis &op2);
};