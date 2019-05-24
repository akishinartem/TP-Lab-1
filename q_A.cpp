#include "q_A.h"
#include <iostream>

using namespace std;

q_A::q_A() {
	a = nullptr;
	b = nullptr;
	k = 0;
}

q_A::~q_A() {
	elem *temp = b;
	while (temp != nullptr) {
		temp = b->Prev;
		delete b;
		b = temp;
	}
}

void q_A::del() {
	elem*temp = b;
	while (temp->Prev != NULL) {
		temp = temp->Prev;
	}
	delete a;
	a = b;
	k--;
}

void q_A::add(int user_value) {
	elem *temp = new elem;
	if (k == 0) {
		temp->Val = user_value;
		temp->Prev = nullptr;
		a = temp;
		b = temp;
	}
	else {
		temp->Val = user_value;
		temp->Prev = b;
		b = temp;
	}
	k++;
}

void q_A::print_queue() {
	elem *temp = get_b();
	int *och = new int[get_k()];
	int l = get_k() - 1;
	for (int i = 0; i < get_k(); ++i) {
		och[l--] = temp->Val;
		temp = temp->Prev;
	}
	for (int i = 0; i < get_k(); ++i) {
		i != get_k() - 1 ? cout << och[i] << " << " : cout << och[i] << endl;
	}
	delete[] och;
}

void q_A::copy_queue(q_A &op1) {

	elem *temp = b;
	int *och = new int[k];
	int l = k - 1;
	for (int i = 0; i < k; ++i) {
		och[l--] = temp->Val;
		temp = temp->Prev;
	}
	for (l = 0; l < k; l++)
			op1.add(och[l]);
	delete[] och;
}

q_A* q_A::merge(q_A *op1) {
	elem *temp = b;
	q_A *j = new q_A;
	int *och_i = new int[k];
	int *och_j = new int[k];
	int l = k - 1;
	for (int i = 0; i < k; ++i) {
		och_i[l--] = temp->Val;
		temp = temp->Prev;
	}
	temp = op1->b;
	l = k - 1;
	for (int i = 0; i < k; ++i) {
		och_j[l--] = temp->Val;
		temp = temp->Prev;
	}
	for (int i = 0; i < k; ++i)
		j->add(och_i[i]);
	for (int i = 0; i < k; ++i)
		j->add(och_j[i]);
	delete[] och_i;
	delete[] och_j;
	och_i = nullptr;
	och_j = nullptr;
	return j;
}

elem *q_A::get_a() {
	return a;
}

elem *q_A::get_b() {
	return b;
}

int q_A::get_k() {
	return k;
}

void q_A::set_a(elem *Val) {
	a = Val;
}

void q_A::set_b(elem *Val) {
	b = Val;
}