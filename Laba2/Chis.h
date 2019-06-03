#pragma once

#include <iostream>

class Chis {
	int *x;
public:
	Chis();
	~Chis();
	Chis(int usrVal);
	int GetX();
	void SetX(int usrVal);

	void Print();
	Chis(const Chis& op1);
	
	Chis operator+(Chis op1);
	Chis operator=(Chis op1);
	bool operator<(Chis &op1);
	bool operator>(Chis &op1);

	friend Chis operator-(Chis op1, Chis op2);
	friend bool operator==(Chis &op1, Chis &op2);
	friend bool operator!=(Chis &op1, Chis &op2);
};
