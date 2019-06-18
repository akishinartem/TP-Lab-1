#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Queue.h"
#include "Chis.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
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
		cout << "Выберите структуру:" << endl;
		cout << "[1] Циклическая очередь." << endl;
		cout << "[2] Класс целых чисел." << endl;
		cout << "[3] Выход.\n>> ";
		cin >> Choise;
		cout << "\n";
		switch (Choise) {
		case '1':
			cout << "Выберите действие:" << endl;
			cout << "[1] Добавление элемента." << endl;
			cout << "[2] Исключение элемента." << endl;
			cout << "[3] Показать очередь." << endl;
			cout << "[4] Проверка на пустоту [!()]." << endl;
			cout << "[5] Выход.\n>> ";
			cin >> subChoise;
			cout << "\n";
			switch (subChoise) {
			case '1':
				cout << "[1] Префиксный метод [++(1 элемент)]." << endl;
				cout << "[2] Постфиксная дружественная функция [(2 элемента)++]." << endl;
				cout << "[3] Выход.\n>> ";
				cin >> subsubChoise;
				cout << "\n";
				switch (subsubChoise) {
				case '1':
					++(q);
					cout << "Элемент добавлен!" << endl;
					break;
				case '2':
					(q)++;
					cout << "2 элемента добавлено!" << endl;
					break;
				case '3':
					break;
				}
				break;
			case '2':
				cout << "[1] Постфиксный метод [(2 элемента)--]." << endl;
				cout << "[2] Префиксная дружественная функция [--(1 элемент)]." << endl;
				cout << "[3] Выход.\n>> ";
				cin >> subsubChoise;
				cout << "\n";
				switch (subsubChoise) {
				case '1':
					(q)--;
					cout << "2 элемента успешно удалено!" << endl;
					break;
				case '2':
					--(q);
					cout << "Элемент успешно удален!" << endl;
					break;
				case '3':
					break;
				}
				break;
			case '3':
				q.Print();
				break;
			case '4':
				if (!(q))
					cout << "Очередь пуста!" << endl;
				else
					cout << "Текущая очередь содержит элементы!" << endl;
				break;
			case '5':
				break;
			}
			system("Pause");
			break;
		case '2':
			cout << "Выберите действие:" << endl;
			cout << "[1] Добавление элементов." << endl;
			cout << "[2] Показать текущий класс." << endl;
			cout << "[3] Сложение || Вычитание." << endl;
			cout << "[4] Сравнение." << endl;
			cout << "[5] Выход.\n>> ";
			cin >> subChoise;
			cout << "\n";
			switch (subChoise) {
			case '1':
				cout << "Выберите класс:" << endl;
				cout << "[1] Класс A." << endl;
				cout << "[2] Класс B." << endl;
				cout << "[3] Выход.\n>> ";
				cin >> subsubChoise;
				cout << "\n";
				switch (subsubChoise) {
				case '1':
					cout << "Введите элемент:\n>> ";
					cin >> usrVal;
					a.SetX(usrVal);
					break;
				case '2':
					cout << "Введите элемент:\n>> ";
					cin >> usrVal;
					b.SetX(usrVal);
					break;
				case '3':
					break;
				}
				break;
			case '2':
				cout << "Выберите класс:" << endl;
				cout << "[1] Класс A." << endl;
				cout << "[2] Класс B." << endl;
				cout << "[3] Выход.\n>> ";
				cin >> subsubChoise;
				cout << "\n";
				switch (subsubChoise) {
				case '1':
					cout << "Текущий класс: ";
					a.Print();
					cout << "\n";
					break;
				case '2':
					cout << "Текущий класс: ";
					b.Print();
					cout << "\n";
					break;
				case '3':
					break;
				}
				break;
			case '3':
				cout << "Выберите действие:" << endl;
				cout << "[1] Сложение." << endl;
				cout << "[2] Вычитание." << endl;
				cout << "[3] Выход.\n>> ";
				cin >> subsubChoise;
				cout << "\n";
				switch (subsubChoise) {
				case '1':
					res = a;
					a = a + b;
					cout << "Результат сложения:" << endl;
					res.Print();
					cout << " + ";
					b.Print();
					cout << " = ";
					a.Print();
					a = res;
					cout << "\n";
					break;
				case '2':
					res = a;
					a = a - b;
					cout << "Результат вычитания:" << endl;
					res.Print();
					cout << " - ";
					b.Print();
					cout << " = ";
					a.Print();
					a = res;
					cout << "\n";
					break;
				case '3':
					break;
				}
				break;
			case '4':
				cout << "[1] Меньше [<<]" << endl;
				cout << "[2] Больше [>>]." << endl;
				cout << "[3] Равенство [==]." << endl;
				cout << "[4] Неравенство [!=]." << endl;
				cout << "[5] Выход.\n>> ";
				cin >> subsubChoise;
				cout << "\n";
				switch (subsubChoise) {
				case '1':
					if (a < b) {
						cout << "Результат:\nКласс A меньше, чем класс B" << endl;
						a.Print();
						cout << " << ";
						b.Print();
						cout << "\n";
					}
					else {
						cout << "Результат:\nКласс A больше, чем класс B" << endl;
						a.Print();
						cout << " >> ";
						b.Print();
						cout << "\n";
					}
					break;
				case '2':
					if (a > b) {
						cout << "Результат:\nКласс A больше, чем класс B" << endl;
						a.Print();
						cout << " >> ";
						b.Print();
						cout << "\n";
					}
					else {
						cout << "Результат:\nКласс A меньше, чем класс B" << endl;
						a.Print();
						cout << " << ";
						b.Print();
						cout << "\n";
					}
					break;
				case '3':
					if (a == b) {
						cout << "Результат:\nКласс A равен классу B" << endl;
						a.Print();
						cout << " == ";
						b.Print();
						cout << "\n";
					}
					else {
						cout << "Результат:\nКласс A неравен классу B" << endl;
						a.Print();
						cout << " != ";
						b.Print();
						cout << "\n";
					}
					break;
				case '4':
					if (a != b) {
						cout << "Результат:\nКласс A неравен классу B" << endl;
						a.Print();
						cout << " != ";
						b.Print();
						cout << "\n";
					}
					else {
						cout << "Результат:\nКласс A равен классу B" << endl;
						a.Print();
						cout << " == ";
						b.Print();
						cout << "\n";
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
