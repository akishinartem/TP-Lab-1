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
	setlocale(LC_ALL,"RUS");
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
		cout << "�������� ��������:" << endl;
		cout << "[1] �������� ������� � �������" << endl;
		cout << "[2] ������� ������� �� �������" << endl;
		cout << "[3] ����������� ������� �������" << endl;
		cout << "[4] ��������� ������� ��������������" << endl;
		cout << "[5] ������� ����� �������" << endl;
		cout << "[6] ������� �������� (������ ��� ������� �����!)" << endl;
		cout << "[7] �����\n=>";
		cin >> menu_choise;

		switch (menu_choise) {
		case '1':
			system("cls");
			cout << "�������� �����������:" << endl;
			cout << "[1] Private" << endl;
			cout << "[2] Protected" << endl;
			cout << "[3] Public\n=>";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.set_a(priv.get_a());
				priv.set_b(priv.get_b());
				cout << "������� �������:\n=>";
				cin >> user_value;
				priv.add(user_value);
				break;
			case '2':
				system("cls");
				prot.set_a(prot.get_a());
				prot.set_b(prot.get_b());
				cout << "������� �������:\n=>";
				cin >> user_value;
				prot.add(user_value);
				break;
			case '3':
				system("cls");
				publ.set_a(publ.get_a());
				publ.set_b(publ.get_b());
				cout << "������� �������:\n=>";
				cin >> user_value;
				publ.add(user_value);
				break;
			default:
				break;
			}
			break;
		case '2':
			system("cls");
			cout << "�������� �����������:" << endl;
			cout << "[1] Private" << endl;
			cout << "[2] Protected" << endl;
			cout << "[3] Public\n=>";
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
			cout << "�������� �����������:" << endl;
			cout << "[1] Private" << endl;
			cout << "[2] Protected" << endl;
			cout << "[3] Public\n=>";
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
			cout << "�������� �����������:" << endl;
			cout << "[1] Private" << endl;
			cout << "[2] Protected" << endl;
			cout << "[3] Public\n=>";
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
			cout << "�������� �����������:" << endl;
			cout << "[1] Private" << endl;
			cout << "[2] Protected" << endl;
			cout << "[3] Public\n=>";
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
			cout << "�������� �����������:" << endl;
			cout << "[1] Private" << endl;
			cout << "[2] Protected" << endl;
			cout << "[3] Public\n=>";
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