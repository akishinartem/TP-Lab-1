#include <iostream>
#include "q_public.h"
using namespace std;

void q_public::calc() {
	float sum = 0;
	float sum_A = 0;
	elem*temp = get_b();

	while (temp != NULL) {
		sum_A = sum_A + temp->Val;
		temp = temp->Prev;
	}
	sum = sum_A / get_k();
	cout << "Srednee arifmetich = " << sum << endl;
}

elem* q_public::get_a() {
	return q_A::get_a();
}

elem* q_public::get_b() {
	return q_A::get_b();
}

int q_public::get_k() {
	return q_A::get_k();
}

void q_public::set_a(elem*value) {
	q_A::set_a(value);
}

void q_public::set_b(elem*value) {
	q_A::set_b(value);
}

void q_public::copy_queue(q_public &op1) {
	elem*temp = get_b();
	int *mas = new int[get_k()];
	int k = get_k() - 1;
	for (int i = 0; i < get_k(); ++i)
	{
		mas[k--] = temp->Val;
		temp = temp->Prev;
	}
	int n = get_k();
	for (k = 0; k < n; k++)
	{
		op1.add(mas[k]);
	}
	delete[] mas;
}

q_public* q_public::merge(q_public *op1) {
	q_public *res = new q_public;
	elem *temp = get_b();
	int num = get_k();
	int *mas_1 = new int[num];
	int *mas_2 = new int[num];
	int k = num - 1;
	for (int i = 0; i < num; ++i)
	{
		mas_1[k--] = temp->Val;
		temp = temp->Prev;
	}
	temp = op1->get_b();
	k = num - 1;
	for (int i = 0; i < num; ++i)
	{
		mas_2[k--] = temp->Val;
		temp = temp->Prev;
	}
	for (int i = 0; i < num; ++i)
		res->add(mas_1[i]);
	for (int i = 0; i < num; ++i)
		res->add(mas_2[i]);
	delete[] mas_1;
	delete[] mas_2;
	mas_1 = nullptr;
	mas_2 = nullptr;
	return res;
}

void q_public::print_queue() {
	elem *temp = get_b();
	int *mas = new int[get_k()];
	int k = get_k() - 1;
	for (int i = 0; i < get_k(); ++i)
	{
		mas[k--] = temp->Val;
		temp = temp->Prev;
	}
	for (int i = 0; i < get_k(); ++i)
	{
		i != get_k() - 1 ? cout << mas[i] << " << " : cout << mas[i] << endl;
	}
	delete[]  mas;
}