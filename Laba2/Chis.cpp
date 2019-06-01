#include "Chis.h"
#include <ctime>
#include <random>
using namespace std;

Chis::Chis() {
	ptr = nullptr;
	k = 0;
}

Chis::~Chis() {
	elem* temp = ptr;
	while (temp != nullptr) {
		temp = ptr->Prev;
		delete ptr;
		ptr = temp;
	}
}

elem *Chis::Getptr() {
	return ptr;
}

int Chis::GetK() {
	return k;
}

void Chis::Setptr(elem* Val) {
	ptr = Val;
}

void Chis::Add() {
	elem *temp = new elem;
	if (k == 0) {
		temp->Val = rand() % 99 + 1;
		temp->Prev = nullptr;
		ptr = temp;
	}
	else {
		temp->Val = rand() % 99 + 1;
		temp->Prev = ptr->Prev;
		ptr = temp;
	}
	k++;
}

void Chis::Del() {
	elem *temp = ptr;
	while (temp->Prev != NULL) {
		temp = temp->Prev;
	}
	delete ptr;
	ptr = temp;
	k--;
}

void Chis::Print() {
	elem *temp = Getptr();
	int *och = new int[GetK()];
	int l = GetK() - 1;
	for (int i = 0; i < GetK(); ++i) {
		och[l--] = temp->Val;
		temp = temp->Prev;
	}
	for (int i = 0; i < GetK(); ++i) {
		i != GetK() - 1 ? cout << "[" << och[i] << "], " : cout << "[" << och[i] << "]\n";
	}
	delete[] och;
}
/*
Chis& Chis::operator+() {
	elem *temp = temp->Val + ptr;
	cout << "Result: " << temp;
	return *this;
}

bool Chis::operator<(Chis &op1) {
	elem *temp = ptr;
	if (temp < op1.ptr) {
		cout << "men[da]";
		return 1;
	}
	else {
		cout << "bol[net]";
		return 0;
	}
}

bool Chis::operator>(Chis &op1) {
	elem *temp = ptr;
	if (temp > op1.ptr) {
		cout << "bol[da]";
		return 1;
	}
	else {
		cout << "men[net]";
		return 0;
	}
}

Chis& operator-(Chis &op1, Chis &op2) {
	Chis temp = op1 - op2;
	return op1;
}

bool operator==(Chis &op1, Chis &op2) {
	if (op1 == op2) {
		cout << "ravn[da]";
		return 1;
	}
	else {
		cout << "ne ravn[net]";
		return 0;
	}
}

bool operator!=(Chis &op1, Chis &op2) {
	if (op1 != op2) {
		cout << "ne ravn[da]";
		return 1;
	}
	else {
		cout << "ravn[net]";
		return 0;
	}
}
*/