#include "Circle.h"

Circle::Circle() {
	ifstream in("Circle.txt");
	int c;
	cout << "\nРежим ввода данных: " << endl;
	cout << "[1] С клавиатуры." << endl;
	cout << "[2] Из файла." << endl;
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
			in >> r;
			cout << "Загруженные данные:" << endl;
			cout << "Радиус: r = " << r << "." << endl;
		}
	}
	if (c == 1) {
		cout << "Введите радиус:\nr = ";
		cin >> r;
	}
}

Circle::~Circle() {
	ofstream out("Circle.txt");
	out << r << " " << S;
	out.close();
}

double Circle::Calc() {
	S = M_PI * (r*r);
	cout << "\nРезультат:\nS = ";
	return S;
}
