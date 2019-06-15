#include "Triangle.h"

Triangle::Triangle() {
	ifstream in("Triangle.txt");
	int c;
	cout << "\n������� ������ ����� ���������� ������: " << endl;
	cout << "[1] � ����������." << endl;
	cout << "[2] �� �����" << endl;
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
			in >> a >> b;
			cout << "����������� ������:" << endl;
			cout << "�������: [" << a << "], [" << b << "]." << endl;
		}
	}
	if (c == 1) {
		system("cls");
		cout << "������� �������:\na = ";
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
	cout << "���������:\nS = ";
	return S;
}