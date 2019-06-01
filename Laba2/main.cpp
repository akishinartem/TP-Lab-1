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
	Chis c;

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
				!(q);
				break;
			case '5':
				break;
			}
			break;
		case '2':
			cout << "\t[1] Add element.\n\t[2] Extract element.\n\t[3] Show class.\n\t[4] Addition | Subtraction.\n\t[5] Comparison.\n\t[6] Exit.\n\n\t>>";
			cin >> subChoise;
			switch (subChoise) {
			case '1':
				c.Add();
				break;
			case '2':
				c.Del();
				break;
			case '3':
				cout << "\n\t\tClass: ";
				c.Print();
				break;
			case '4':
				cout << "\n\t\t[1] Addition(+)\n\t\t[2] Subtraction(-).\n\t\t[3] Exit.\n\t\t>>";
				cin >> subsubChoise;
				/*switch (subsubChoise) {
				case '1':
					
					break;
				case '2':

					break;
				case '3':
					break;
				}
				break;*/
			case '5':
				cout << "\n\t\t[1] Lesser(<)\n\t\t[2] Larger(>).\n\t\t[3] Equal.\n\t\t[4] Unequal.\n\t\t[5]Exit.\n\t\t>>";
				cin >> subsubChoise;
				/*switch (subsubChoise) {
				case '1':
					
					break;
				case '2':

					break;
				case '3':

					break;
				case '4':

					break;
				case '5':
					break;
				}*/
			}
			break;
		case '3':
			break;
		}
		system("Pause");
		system("cls");
	} while (Choise != '7');
	return 0;
}