#pragma once
#include "q_A.h"

class q_publ : public q_A {
public:
	void add(int user_value) { q_A::add(user_value); }
	void del() { q_A::del(); }
	void print_queue();
	void calc();
	void copy_queue(q_publ &op1);
	q_publ *merge(q_publ *op1);
	void set_a(elem*value);
	void set_b(elem*value);
	elem* get_a();
	elem* get_b();
	int get_k();
};
