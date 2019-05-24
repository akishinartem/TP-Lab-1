#pragma once
#include "q_A.h"

class q_prot : protected q_A {
public:
	void add(int user_value) { q_A::add(user_value); }
	void del() { q_A::del(); }
	void print_queue();
	void calc();
	void copy_queue(q_prot &op1);
	q_prot *merge(q_prot *op1);
	void set_a(elem*value);
	void set_b(elem*value);
	elem* get_a();
	elem* get_b();
	int get_k();
};
