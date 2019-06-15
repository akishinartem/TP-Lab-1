#include "Trapezium.h"

Trapezium::Trapezium() {
	ifstream in("Trapezium.txt");
	int c;
	cout << "\n������� ������ ����� ���������� ������: " << endl;
	cout << "[1] � ����������." << endl;
	cout << "[2] �� �����." << endl;
	cout << ">>";
	cin >> c;
	system("cls");
	if (c == 2) {
		if (!in || FileCheck(in)) {
			cout << "���� ���� ��� �� ����������." << endl;
			system("pause");
			c = 1;
		}
		else {
			in >> a >> b >> h;
			cout << "����������� ������:" << endl;
			cout << "����� ���������: [" << a << "], [" << b << "].\n";
			cout << "������: [" << h << "]." << endl;
		}
	}
	if (c == 1) {
		system("cls");
		cout << "������� ����� ���������:" << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "������� ������:\nh = ";
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
	cout << "���������:\nS = ";
	return S;
}