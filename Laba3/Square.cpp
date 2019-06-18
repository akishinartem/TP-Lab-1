#include "Square.h"

Square::Square() {
	ifstream in("Square.txt");
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
			in >> a;
			cout << "Загруженные данные:" << endl;
			cout << "Сторона: r = " << a << "." << endl;
		}
	}
	if (c == 1) {
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
	cout << "\nРезультат:\nS = ";
	return S;
}
