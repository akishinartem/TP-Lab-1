#pragma once
#include "q_A.h"

class q_priv : private q_A {
public:
	void add(int user_value) { q_A::add(user_value); }
	void calc();
	void del() { q_A::del(); }
	void print_queue();
	void copy_queue(q_priv &op1);
	q_priv *merge(q_priv *op1);
	void set_a(elem*value);
	void set_b(elem*value);
	elem* get_a();
	elem* get_b();
	int get_k();
};