#include "Triangle.h"

Triangle::Triangle() {
	ifstream in("Triangle.txt");
	int c;
	cout << "\nРежим ввода данных: " << endl;
	cout << "[1] С клавиатуры." << endl;
	cout << "[2] Из файла" << endl;
	cout << ">> ";
	cin >> c;
	cout << "\n";
	if (c == 2) {
		if (!in || FileCheck(in)) {
			cout << "Файл пуст или не существует." << endl;
			system("pause");
			c = 1;
		}
		else {
			in >> a >> b;
			cout << "Загруженные данные:" << endl;
			cout << "Стороны: a = " << a << "; b = " << b << "." << endl;
		}
	}
	if (c == 1) {
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
	cout << "\nРезультат:\nS = ";
	return S;
}
