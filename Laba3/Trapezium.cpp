#include "Trapezium.h"

Trapezium::Trapezium() {
	ifstream in("Trapezium.txt");
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
			in >> a >> b >> h;
			cout << "Загруженные данные:" << endl;
			cout << "Длина оснований: [" << a << "], [" << b << "].\n";
			cout << "Высота: [" << h << "]." << endl;
		}
	}
	if (c == 1) {
		system("cls");
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
	cout << "Результат:\nS = ";
	return S;
}
