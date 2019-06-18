#ifndef FUNCTIONS_CPP
#define FUNCTIONS_CPP

#include <iostream>
#include "Functions.h"

using namespace std;

template <typename X>
void worker(int func, X) {
	int size = 0;
	cout << "\n������� ������ ���������:" << endl;
	cout << ">> ";
	cin >> size;
	cout << "\n";
	Queue<X> first_mass(size);
	Queue<X> second_mass(size);
	
	cout << "������ ���������: " << endl;
	X* ptr = first_mass.GetVal();
	for (int i = 0; i < size; i++) {
		cout << ">> ";
		cin >> ptr[i];
	}
	cout << "\n";

	ptr = second_mass.GetVal();
	cout << "������ ���������: " << endl;
	for (int i = 0; i < size; i++) {
		cout << ">> ";
		cin >> ptr[i];
	}
	cout << "\n";

	cout << "������: ";
	first_mass.Print();

	cout << "������: ";
	second_mass.Print();

	int usrVal = 0;
	switch (func) {
	case 1:
		first_mass == second_mass;
		break;
	case 2:
		first_mass != second_mass;
		break;
	case 3:
		char i = 0;
		first_mass[usrVal];
		second_mass[usrVal];
		cout << "\n������� ������:" << endl;
		cout << ">> ";
		cin >> usrVal;
		cout << "\n";
		cout << "�� �������� [" << usrVal << "] � ������ ��������� ��������� ������� [" << first_mass[usrVal] << "]." << endl;
		cout << "�� �������� [" << usrVal << "] �� ������ ��������� ��������� ������� [" << second_mass[usrVal] << "]." << endl;
		break;
	}
}
#endif