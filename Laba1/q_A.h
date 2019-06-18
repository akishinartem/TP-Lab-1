#pragma once

#include "Element.h"
class q_A {
	elem *a;
	elem *b;
	int k;
public:
	q_A();
	~q_A();
	void del();
	void add(int user_value);
	void print_queue();
	int calc();
	void copy_queue(q_A &op1);
	q_A *merge(q_A *op1);
	elem *get_a();
	elem *get_b();
	int get_k();
	void set_k(int num);
	void set_a(elem *value);
	void set_b(elem *value);
};
