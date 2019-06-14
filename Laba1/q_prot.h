#pragma once

#include "q_A.h"
class q_prot : protected q_A {
public:
	void calc();
	void new_a(elem*value);
	void new_b(elem*value);
};
