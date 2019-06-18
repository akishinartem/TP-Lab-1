#include <iostream>
#include <conio.h>
#include <windows.h>

#include "q_A.h"
#include "q_prot.h"
#include "q_publ.h"
#include "q_priv.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	q_A *q1 = 0;
	q_A base;
	q_A base_copy;
	q_A base_merge;
	q_priv priv;
	q_publ publ;
	q_prot prot;

	int user_value = 0;
	char menu_choise;
	char submenu_choise;

	do
	{
		system("cls");
		cout << "Выберите действие:" << endl;
		cout << "[1] Добавление элемента в очередь" << endl;
		cout << "[2] Исключение элемента из очереди" << endl;
		cout << "[3] Вывод на экран текщей очереди" << endl;
		cout << "[4] Вычисление среднего арифметического" << endl;
		cout << "[5] Создание копии очереди" << endl;
		cout << "[6] Слияние очередей (только при наличии копии!)" << endl;
		cout << "[7] Выход из программы\n=>";
		cin >> menu_choise;
		switch (menu_choise) {
		case '1':
			system("cls");
			base.set_a(base.get_a());
			base.set_b(base.get_b());
			cout << "Введите элемент:\n=>";
			cin >> user_value;
			base.add(user_value);
			break;
		case '2':
			system("cls");
			base.set_a(base.get_a());
			base.set_b(base.get_b());
			base.del();
			cout << "Исключение успешно!" << endl;
			system("Pause");
			break;
		case '3':
			system("cls");
			base.set_a(base.get_a());
			base.set_b(base.get_b());
			base.print_queue();
			cout << "\n";
			system("Pause");
			break;
		case '4':
			system("cls");
			cout << "Выберите модификатор доступа:" << endl;
			cout << "[1] Private." << endl;
			cout << "[2] Protected." << endl;
			cout << "[3] Public." << endl;
			cout << "[4] Выход." << endl;
			cout << "=> ";
			cin >> submenu_choise;
			cout << "\n";
			switch (submenu_choise) {
			case '1':
				priv.new_a(base.get_a());
				priv.new_b(base.get_b());
				priv.new_k(base.get_k());
				priv.print();
				priv.calc();
				break;
			case '2':
				prot.new_a(base.get_a());
				prot.new_b(base.get_b());
				prot.new_k(base.get_k());
				prot.print();
				prot.calc();
				break;
			case '3':
				cout << "Текущая очередь:" << endl;
				publ.set_a(base.get_a());
				publ.set_b(base.get_b());
				publ.new_k(base.get_k());
				publ.print();
				publ.calc();
				break;
			case '4':
				break;
			}
			system("Pause");
			break;
		case '5':
			system("cls");
			base.set_a(base.get_a());
			base.set_b(base.get_b());
			base.copy_queue(base_copy);
			cout << "Копия создана: ";
			base_copy.print_queue();
			system("Pause");
			break;
		case '6':
			system("cls");
			base.set_a(base.get_a());
			base.set_b(base.get_b());
			base_merge = *base.merge(&base_copy);
			base_merge.print_queue();
			system("Pause");
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
