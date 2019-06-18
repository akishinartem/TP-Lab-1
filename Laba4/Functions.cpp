#ifndef FUNCTIONS_CPP
#define FUNCTIONS_CPP

#include <iostream>
#include "Functions.h"

using namespace std;

template <typename X>
void worker(int func, X) {
	int size = 0;
	cout << "\nВведите размер множества:" << endl;
	cout << ">> ";
	cin >> size;
	cout << "\n";
	Queue<X> first_mass(size);
	Queue<X> second_mass(size);
	
	cout << "Первое множество: " << endl;
	X* ptr = first_mass.GetVal();
	for (int i = 0; i < size; i++) {
		cout << ">> ";
		cin >> ptr[i];
	}
	cout << "\n";

	ptr = second_mass.GetVal();
	cout << "Второе множество: " << endl;
	for (int i = 0; i < size; i++) {
		cout << ">> ";
		cin >> ptr[i];
	}
	cout << "\n";

	cout << "Первое: ";
	first_mass.Print();

	cout << "Второе: ";
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
		cout << "\nВведите индекс:" << endl;
		cout << ">> ";
		cin >> usrVal;
		cout << "\n";
		cout << "По индексом [" << usrVal << "] в первом множестве находится элемент [" << first_mass[usrVal] << "]." << endl;
		cout << "По индексом [" << usrVal << "] во втором множестве находится элемент [" << second_mass[usrVal] << "]." << endl;
		break;
	}
}
#endif