#pragma once

typedef struct elem {
	int Val;
	elem *Prev;
public:
	elem() :Val(0), Prev(nullptr) {};
	void setValue(int userValue = 0) { Val = userValue; }
	int getValue() { return Val; }
	void setNext(elem *Value) { Prev = Value; }
	elem *getNext() { return Prev; }
}elem;