#include "q_priv.h"
#include <iostream>
using namespace std;

void q_priv::calc() {
	float sum = 0;
	float sum_A = 0;
	elem*temp = get_b();

	while (temp != NULL) {
		sum_A = sum_A + temp->Val;
		temp = temp->Prev;
	}
	sum = sum_A / get_k();
	cout << "Среднее арифметическое = [" << sum << "]\n";
}

void q_priv::new_a(elem*value) {
	set_a(value);
}

void q_priv::new_b(elem*value) {
	set_b(value);
}
