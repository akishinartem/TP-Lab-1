#include "Circle.h"

Circle::Circle() {
	ifstream in("Circle.txt");
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
			in >> r;
			cout << "����������� ������:" << endl;
			cout << "������: [" << r << "]." << endl;
		}
	}
	if (c == 1) {
		system("cls");
		cout << "������� ������:\nr = ";
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
	cout << "���������:\nS = ";
	return S;
}