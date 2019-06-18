#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>

#include "Template.h"
#include "Functions.h"
#include "Massive.cpp"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int r = 0;
	cout << "������� ������:" << endl;		//!!!
	cout << "���-�� ����� = ";
	cin >> r;
	system("cls");
	int* int_mass = new int[r];
	char* char_mass = new char[r];
	float* float_mass = new float[r];
	double* double_mass = new double[r];
	char menu;
	char type;
	int action;
	string s = "abc";
	do {
		cout << "�������� �����: " << endl;
		cout << "[1] ����� � ������� �� �����." << endl;
		cout << "[2] ������ � ����������." << endl;
		cout << "[3] �����." << endl;
		cout << ">> ";
		cin >> menu;
		switch (menu) {
		case '1':
			cout << "\n���� ������ ���� ��������� �������:" << endl;
			cout << "[1] Integer." << endl;
			cout << "[2] Char." << endl;
			cout << "[3] Float." << endl;
			cout << "[4] Double." << endl;
			cout << "[5] �����." << endl;
			cout << ">> ";
			cin >> type;
			switch (type) {
			case '1':
				cout << "\n������� ������ ���� [int] ������� [" << r << "]:" << endl;
				for (int i = 0; i < r; i++) {
					cout << ">> ";
					cin >> int_mass[i];
				}
				Search(int_mass, r);
				break;
			case '2':
				cout << "\n������� ������ ���� [char] ������� [" << r << "]:" << endl;
				for (int i = 0; i < r; i++) {
					cout << ">> ";
					cin >> char_mass[i];
				}
				Search(char_mass, r);
				break;
			case '3':
				cout << "\n������� ������ ���� [float] ������� [" << r << "]:" << endl;
				for (int i = 0; i < r; i++) {
					cout << ">> ";
					cin >> float_mass[i];
				}
				Search(float_mass, r);
				break;
			case '4':
				cout << "\n������� ������ ���� [double] ������� [" << r << "]:" << endl;
				for (int i = 0; i < r; i++) {
					cout << ">> ";
					cin >> double_mass[i];
				}
				Search(double_mass, r);
				break;
			case '5':
				break;
			}
			break;
		case '2':
			cout << "\n�������� �����: " << endl;
			cout << "[1] ��������� ��������." << endl;
			cout << "[2] ����������� ��������." << endl;
			cout << "[3] ������ �� �������." << endl;
			cout << "[4] �����." << endl;
			cout << ">> ";
			cin >> action;
			if (action == 4) {
				break;
			}
			cout << "\n���� ������ ���� ��������� �������:" << endl;
			cout << "[1] Integer." << endl;
			cout << "[2] Char." << endl;
			cout << "[3] Float." << endl;
			cout << "[4] Double." << endl;
			cout << "[5] String." << endl;
			cout << "[6] �����." << endl;
			cout << ">> ";
			cin >> type;
			switch (type) {
			case '1':
				worker(action, 1);
				break;
			case '2':
				worker(action, 'c');
				break;
			case '3':
				worker(action, 1.0f);
				break;
			case '4':
				worker(action, 1.0);
				break;
			case '5':
				worker(action, s);
				break;
			case '6':
				break;
			}
			break;
		case '3':
			delete[] int_mass;
			delete[] char_mass;
			delete[] float_mass;
			delete[] double_mass;
			menu = 3;
			break;
		}
		system("pause");
		system("cls");
	} while (menu != 3);
}