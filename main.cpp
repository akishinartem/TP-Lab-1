#include <iostream>
#include <conio.h>
#include <windows.h>

#include "q_A.h"
#include "q_prot.h"
#include "q_publ.h"
#include "q_priv.h"

using namespace std;

int main()
{
	q_A *q1 = 0;
	q_priv priv;
	q_priv priv_copy;
	q_priv *priv_merge = 0;
	q_publ publ;
	q_publ publ_copy;
	q_publ *publ_merge = 0;
	q_prot prot;
	q_prot prot_copy;
	q_prot *prot_merge = 0;

	int user_value = 0;
	char menu_choise;
	char submenu_choise;

	do
	{
		system("cls");
		cout << "What do you want to do?" << endl;
		cout << "1.Add element to the Queue." << endl;
		cout << "2.Extract element from the Queue." << endl;
		cout << "3.Print Queue on the screen." << endl;
		cout << "4.Calculate amount of elements," << endl;
		cout << "larger than harmonic value." << endl;
		cout << "5.Create copy of the Queue." << endl;
		cout << "6.Merge Queues (only if you do a copy!)." << endl;
		cout << "7. Exit" << endl;
		cout << ">";
		cin >> menu_choise;

		switch (menu_choise) {
		case '1':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.set_a(priv.get_a());
				priv.set_b(priv.get_b());
				cout << "Enter value of element:" << endl;
				cout << ">";
				cin >> user_value;
				priv.add(user_value);
				break;
			case '2':
				system("cls");
				prot.set_a(prot.get_a());
				prot.set_b(prot.get_b());
				cout << "Enter value of element:" << endl;
				cout << ">";
				cin >> user_value;
				prot.add(user_value);
				break;
			case '3':
				system("cls");
				publ.set_a(publ.get_a());
				publ.set_b(publ.get_b());
				cout << "Enter value of element:" << endl;
				cout << ">";
				cin >> user_value;
				publ.add(user_value);
				break;
			default:
				break;
			}
			break;
		case '2':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.set_a(priv.get_b());
				priv.set_b(priv.get_b());
				priv.del();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.set_a(prot.get_a());
				prot.set_b(prot.get_b());
				prot.del();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.set_a(publ.get_a());
				publ.set_b(publ.get_b());
				publ.del();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '3':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.set_a(priv.get_a());
				priv.set_b(priv.get_b());
				priv.print_queue();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.set_a(prot.get_a());
				prot.set_b(prot.get_b());
				prot.print_queue();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.set_a(publ.get_a());
				publ.set_b(publ.get_b());
				publ.print_queue();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '4':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.set_a(priv.get_a());
				priv.set_b(priv.get_b());
				priv.calc();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.set_a(prot.get_a());
				prot.set_b(prot.get_b());
				prot.get_k();
				prot.calc();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.set_a(publ.get_a());
				publ.set_b(publ.get_b());
				publ.calc();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '5':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.set_a(priv.get_a());
				priv.set_b(priv.get_b());
				priv.copy_queue(priv_copy);
				priv_copy.print_queue();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.set_a(prot.get_a());
				prot.set_b(prot.get_b());
				prot.copy_queue(prot_copy);
				prot_copy.print_queue();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.set_a(publ.get_a());
				publ.set_b(publ.get_b());
				publ.copy_queue(publ_copy);
				publ_copy.print_queue();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '6':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.set_a(priv.get_a());
				priv.set_b(priv.get_b());
				priv_merge = priv.merge(&priv_copy);
				priv_merge->print_queue();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.set_a(prot.get_a());
				prot.set_b(prot.get_b());
				prot_merge = prot.merge(&prot_copy);
				prot_merge->print_queue();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.set_a(publ.get_a());
				publ.set_b(publ.get_b());
				publ_merge = publ.merge(&publ_copy);
				publ_merge->print_queue();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '7':
			menu_choise = 7;
			break;
		default:
			break;
		}

	} while (menu_choise != 7);
	return 0;
}