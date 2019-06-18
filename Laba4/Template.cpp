#ifndef TEMPL
#define TEMPL

#include "Template.h"
#include <iostream>
#include <string>
using namespace std;

template <typename X>
Queue<X>::Queue() {
	Value = NULL;
	k = 0;
}

template <typename X>
Queue<X>::~Queue() {
	delete[] this->Value;
}

template <typename X>
Queue<X>::Queue(int new_k) {
	try {
		if (new_k <= 0) {
			string s = "Ошибка! Размер 0 или Отрицательный";
			throw s;
		}
		this->Value = new X[new_k];
		this->k = new_k;
		for (int i = 0; i < GetK(); i++) {
			Value[i] = rand() % 100 + 1 - GetK();
		}
	}
	catch (string s) {
		cout << s << endl;
		system("pause");
		exit(1);
	}
}

template <typename X>
X* Queue<X>::GetVal() {
	return Value;
}

template <typename X>
int Queue<X>::GetK() {
	return k;
}

template <typename X>
void Queue<X>::Print() {
	for (int i = 0; i < GetK(); i++) {
		cout << "[" << Value[i] << "] ";
	}
	cout << "\n";
}

template <typename X>
bool Queue<X>::operator!=(Queue<X>& op1) {
	bool flag = false;
	for (int i = 0; i < op1.GetK(); i++) {
		for (int j = 0; j < GetK(); j++) {
			if (op1.Value[i] != Value[j]) {
				flag = true;
			}
		}
	}
	if (flag) {
		cout << "Множества различны [первая != второй]." << endl;
		return true;
	}
	else {
		cout << "Множества подобны [первая == второй]." << endl;
		return false;
	}
}

template <typename X>
bool Queue<X>::operator==(Queue<X>& op1) {
	bool flag = false;
	for (int i = 0; i < op1.GetK(); i++) {
		for (int j = 0; j < GetK(); j++) {
			if (op1.Value[i] == Value[j]) {
				flag = true;
			}
		}
	}
	if (flag) {
		cout << "Множества подобны [первая == второй]." << endl;
		return true;
	}
	else {
		cout << "Множества различны [первая != второй]." << endl;
		return false;
	}
}

template <typename X>
X Queue<X>::operator[](int usrVal) {
	return Value[usrVal];
}
#endif