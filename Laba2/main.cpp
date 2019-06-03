#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Queue.h"
#include "Chis.h"

using namespace std;

int main() {
	int usrVal = 0;
	char Choise;
	char subChoise;
	char subsubChoise;
	Queue q;
	Chis a;
	Chis b;
	Chis res;

	system("cls");
	do
	{
		cout << "Choose action:\n[1] Cyclic class actions\n[2] Integer class actions\n[3] Exit.\n\n>> ";
		cin >> Choise;
		switch (Choise) {
		case '1':
			cout << "\t[1] Add element.\n\t[2] Extract element.\n\t[3] Show queue.\n\t[4] !()[empty - check].\n\t[5] Exit.\n\n\t>>";
			cin >> subChoise;
			switch (subChoise) {
			case '1':
				cout << "\t\tSelect option:\n\t\t[1] Standart.\n\t\t[2] ++() [pref, method].\n\t\t[3] ()++ [post, friend].\n\t\t[4] Exit.\n\n\t\t>> ";
				cin >> subsubChoise;
				switch (subsubChoise) {
				case '1':
					q.Add();
					break;
				case '2':
					++(q);
					break;
				case '3':
					(q)++;
					break;
				case '4':
					break;
				}
				break;
			case '2':
				cout << "\t\tSelect option:\n\t\t[1] Standart.\n\t\t[2] ()-- [post, method].\n\t\t[3] --() [pref, friend].\n\t\t[4] Exit.\n\n\t\t>> ";
				cin >> subsubChoise;
				switch (subsubChoise) {
				case '1':
					q.Del();
					break;
				case '2':
					(q)--;
					break;
				case '3':
					--(q);
					break;
				case '4':
					break;
				}
				break;
			case '3':
				cout << "\n\t\tQueue: ";
				q.Print();
				break;
			case '4':
				if (!(q)) {
					cout << "Queue is clear!";
				}
				else {
					cout << "Queue has 1 or more elements!";
				}
				break;
			case '5':
				break;
			}
			system("Pause");
			break;
		case '2':
			cout << "\t[1] Add element.\n\t[2] Show class.\n\t[3] Addition | Subtraction.\n\t[4] Comparison.\n\t[5] Exit.\n\n\t>>";
			cin >> subChoise;
			switch (subChoise) {
			case '1':
				cout << "\n\t\tChoose variable:\n\t\t[1] var A.\n\t\t[2] var B.\n\t\t[3] Exit.\n\n\t\t>>";
				cin >> subsubChoise;
				switch (subsubChoise) {
				case '1':
					cout << "\n\n\t\t\tType element:\n\n\t\t\t>>";
					cin >> usrVal;
					a.SetX(usrVal);
					break;
				case '2':
					cout << "\n\n\t\t\tType element:\n\n\t\t\t>>";
					cin >> usrVal;
					b.SetX(usrVal);
					break;
				case '3':
					break;
				}
				break;
			case '2':
				cout << "\n\n\t\tChoose Class:\n\t\t[1] var A.\n\t\t[2] var B.\n\t\t[3] Exit.\n\n\t\t>>";
				cin >> subsubChoise;
				switch (subsubChoise) {
				case '1':
					cout << "\n\n\t\t\tClass: ";
					a.Print();
					cout << "\n\n\t\t\t";
					break;
				case '2':
					cout << "\n\n\t\t\tClass: ";
					b.Print();
					cout << "\n\n\t\t\t";
					break;
				case '3':
					break;
				}
				break;
			case '3':
				cout << "\n\t\t[1] Addition(+)\n\t\t[2] Subtraction(-).\n\t\t[3] Exit.\n\t\t>>";
				cin >> subsubChoise;
				switch (subsubChoise) {
				case '1':
					res = a;
					a = a + b;
					cout << "\n\n\t\t\tResult:";
					res.Print();
					cout << "\n\t\t\t+\n\t\t\t";
					b.Print();
					cout << "\n\t\t\t=\n\t\t\t";
					a.Print();
					a = res;
					break;
				case '2':
					res = a;
					a = a - b;
					cout << "\n\n\t\t\tResult:";
					res.Print();
					cout << "\n\n\t\t\t-\n\n\t\t\t";
					b.Print();
					cout << "\n\n\t\t\t=\n\n\t\t\t";
					a.Print();
					a = res;
					break;
				case '3':
					break;
				}
				break;
			case '4':
				cout << "\n\t\t[1] Lesser(<)\n\t\t[2] Larger(>).\n\t\t[3] Equal.\n\t\t[4] Unequal.\n\t\t[5]Exit.\n\t\t>>";
				cin >> subsubChoise;
				switch (subsubChoise) {
				case '1':
					if (a < b) {
						cout << "\n\n\t\t\tvar A is lesser than var B [A < B]";
					}
					else {
						cout << "\n\n\t\t\tvar A is better than var B [A > B]";
					}
					break;
				case '2':
					if (a > b) {
						cout << "\n\n\t\t\tvar A is better than var B [A > B]";
					}
					else {
						cout << "\n\n\t\t\tvar A is lesser than var B [A < B]";
					}
					break;
				case '3':
					if (a == b) {
						cout << "\n\n\t\t\tvar A equal to var B [A = B]";
					}
					else {
						cout << "\n\n\t\t\tvar A not equal to var B [A != B]";
					}
					break;
				case '4':
					if (a == b) {
						cout << "\n\n\t\t\tvar A not equal to var B [A != B]";
					}
					else {
						cout << "\n\n\t\t\tvar A equal to var B [A = B]";
					}
					break;
				case '5':
					break;
				}
			}
			system("Pause");
			break;
		case '3':
			Choise = '3';
			break;
		}
		system("cls");
	} while (Choise != '3');
	return 0;
}
