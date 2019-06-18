#include "Trapezium.h"

Trapezium::Trapezium() {
	ifstream in("Trapezium.txt");
	int c;
	cout << "\nРежим ввода данных: " << endl;
	cout << "[1] С клавиатуры." << endl;
	cout << "[2] Из файла." << endl;
	cout << ">>";
	cin >> c;
	cout << "\n";
	if (c == 2) {
		if (!in || FileCheck(in)) {
			cout << "Файл пуст или не существует." << endl;
			system("pause");
			c = 1;
		}
		else {
			in >> a >> b >> h;
			cout << "Загруженные данные:" << endl;
			cout << "Длины оснований: a = " << a << "; b = " << b << "." << endl;
			cout << "Высота: h = " << h << "." << endl;
		}
	}
	if (c == 1) {
		cout << "Введите длины оснований:" << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "Введите высоту:\nh = ";
		cin >> h;
	}
	in.close();
}

Trapezium::~Trapezium() {
	ofstream out("Trapezium.txt");
	out << a << " " << b << " " << h << " " << S;
	out.close();
}

double Trapezium::Calc() {
	S = h * ((a + b) / 2.0);
	cout << "\nРезультат:\nS = ";
	return S;
}
