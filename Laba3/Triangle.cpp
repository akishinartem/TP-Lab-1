#include "Triangle.h"

Triangle::Triangle() {
	ifstream in("Triangle.txt");
	int c;
	cout << "\nВыбрать откуда будет считывание данных: " << endl;
	cout << "[1] С клавиатуры." << endl;
	cout << "[2] Из файла" << endl;
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
			in >> a >> b;
			cout << "Загруженные данные:" << endl;
			cout << "Стороны: [" << a << "], [" << b << "]." << endl;
		}
	}
	if (c == 1) {
		system("cls");
		cout << "Введите стороны:\na = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
	}
	in.close();
}

Triangle::~Triangle() {
	ofstream out("Triangle.txt");
	out << a << " " << b << " " << S;
	out.close();
}

double Triangle::Calc() {
	S = (a*b) / 2.0;
	cout << "Результат:\nS = ";
	return S;
}