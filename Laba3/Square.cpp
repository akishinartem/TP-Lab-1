#include "Square.h"

Square::Square() {
	ifstream in("Square.txt");
	int c;
	cout << "\nВыбрать откуда будет считывание данных: " << endl;
	cout << "[1] С клавиатуры." << endl;
	cout << "[2] Из файла." << endl;
	cout << ">>";
	cin >> c;
	system("cls");
	if (c == 2) {
		if (!in || FileCheck(in)) {
			cout << "Файл пуст или не существует." << endl;
			system("pause");
			c = 1;
		}
		else {
			in >> a;
			cout << "Загруженные данные:" << endl;
			cout << "Сторона: [" << a << "]." << endl;
		}
	}
	if (c == 1) {
		system("cls");
		cout << "Введите сторону:\na = ";
		cin >> a;
	}
}

Square::~Square() {
	ofstream out("Square.txt");
	out<< a << " " << S;
	out.close();
}

double Square::Calc() {
	S = a * a;
	cout << "Результат:\nS = ";
	return S;
}