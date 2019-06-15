#include <iostream>
#include "Area.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Trapezium.h"

int main() {
	setlocale(LC_ALL, "Rus");
	Area* obj[4] = { nullptr };
	char menu;
	do
	{
		system("cls");
		cout << "Произвести расчет площади: " << endl;
		cout << "[1] Квадрат." << endl;
		cout << "[2] Круг." << endl;
		cout << "[3] Треугольник (прямоугольный)." << endl;
		cout << "[4] Трапеция." << endl;
		cout << "[5] Выход." << endl;
		cout << ">>";
		cin >> menu;
		switch (menu) {
		case '1': {
			obj[menu - 1] = new Square;
			cout << obj[menu - 1]->Calc() << endl;
			delete obj[menu - 1];
			break;
		}
		case '2': {
			obj[menu - 1] = new Circle;
			cout << obj[menu - 1]->Calc() << endl;
			delete obj[menu - 1];
			break;
		}
		case '3': {
			obj[menu - 1] = new Triangle;
			cout << obj[menu - 1]->Calc() << endl;
			delete obj[menu - 1];
			break;
		}
		case '4': {
			obj[menu - 1] = new Trapezium;
			cout << obj[menu - 1]->Calc() << endl;
			delete obj[menu - 1];
			break;
		}
		case '5':
			menu = 5;
			break;
		default:
			break;
		}
		system("pause");
	} while (menu != 5);
	return 0;
}