#include "Square.h"

Square::Square() {
	ifstream in("Square.txt");
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
			in >> a;
			cout << "����������� ������:" << endl;
			cout << "�������: [" << a << "]." << endl;
		}
	}
	if (c == 1) {
		system("cls");
		cout << "������� �������:\na = ";
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
	cout << "���������:\nS = ";
	return S;
}