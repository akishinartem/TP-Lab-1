#include "Queue.h"
#include <random>
#include <ctime>
using namespace std;

Queue::Queue() {
	Head = nullptr;
	Tail = nullptr;
	k = 0;
}

Queue::~Queue() {
	elem*temp = Tail;
	while (temp != nullptr) {
		temp = Tail->Prev;
		delete Tail;
		Tail = temp;
	}
}

int Queue::GetK() {
	return k;
}

elem *Queue::GetHead(){
	return Head;
}

elem *Queue::GetTail(){
	return Tail;
}

void Queue::SetHead(elem *Val){
	Head = Val;
}

void Queue::SetTail(elem *Val){
	Tail = Val;
}

void Queue::Add(){
	elem *temp = new elem;
	if (k == 0) {
		temp->Val = rand()%50 + 1;
		temp->Prev = nullptr;
		Head = temp;
		Tail = temp;
	}
	else {
		temp->Val = rand()%50 + 1;
		temp->Prev = Tail;
		Tail = temp;
	}
	k++;
}

void Queue::Del() {
	elem*temp = Tail;
	while (temp->Prev != NULL) {
		temp = temp->Prev;
	}
	delete Head;
	Head = temp;
	k--;
}

void Queue::Print() {
	elem *temp = GetTail();
	int *och = new int[GetK()];
	int l = GetK() - 1;
	for (int i = 0; i < GetK(); ++i) {
		och[l--] = temp->Val;
		temp = temp->Prev;
	}
	for (int i = 0; i < GetK(); ++i) {
		i != GetK() - 1 ? cout << "[" << och[i] << "], " : cout << "[" << och[i] << "]\n";
	}
	delete[] och;
}


Queue& Queue::operator!() {
	if (GetK() == 0) {
		cout << "Ochered pysta!/n";
	}
	return *this;
}

Queue& Queue::operator++() {
	Add();
	return *this;
}

Queue& Queue::operator--(int) {
	elem*temp = Tail;
	while (temp->Prev->Prev != Head) {
		temp = temp->Prev;
	}
	delete Head;
	delete temp->Prev;
	Head = temp;
	temp->Prev = NULL;
	k--;
	k--;
	return *this;
}

Queue& operator++(Queue &op1, int usrVal) {
	op1.Add();
	op1.Add();
	return op1;
}

Queue& operator--(Queue &op1) { // error!!
	op1.Del();
	op1.Del();
	return op1;
}