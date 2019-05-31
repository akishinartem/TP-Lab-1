#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Queue.h"

using namespace std;

int main() {
	int usrVal = 0;
	char Choise;
	char subChoise;

	Queue q;

	system("cls");
	do
	{
		cout << "Choose action:\n[1] Add element.\n[2] Extract element.\n[3] Show queue.\n[4] Copy queue.\n[5] Check for empty.\n\n[7] Exit." << endl;
		cin >> Choise;
		switch(Choise) 
		{
		case '1':
			cout << "\tSelect option:\n\t[1] Standart.\n\t[2] ++().\n\t[3] ()++.\n\t[4] Exit.\n\n\t>> ";
			cin >> subChoise;
			cout << " <<";
			switch(subChoise) {
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
			cout << "\tSelect option:\n\t[1] Standart.\n\t[2] ()--.\n\t[3] --().\n\t[4] Exit.\n\n\t>> ";
			cin >> subChoise;
			cout << " <<";
			switch(subChoise) {
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
			q.Print();
			break;
		case '4':	// !!!
		case '5':	// !!!
			!(q);
			break;
		}
		system("Pause");
	} while(Choise !='7');
	return 0;
}