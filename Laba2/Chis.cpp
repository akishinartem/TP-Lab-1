#include "Chis.h"

using namespace std;

Chis::Chis() {
	x = new int;
	*x = 0;
}

Chis::~Chis() {
	delete x;
}

Chis::Chis(int usrVal) {
	*x = usrVal;
}

int Chis::GetX() {
	return *x;
}

void Chis::SetX(int usrVal) {
	x = new int;
	*x = usrVal;
}

void Chis::Print() {
	cout << *x;
}

Chis::Chis(const Chis& op1) {
	x = new int;
	*x = *(op1.x);
}

Chis Chis::operator+(Chis op1) {
	Chis temp(op1);
	*temp.x = *this->x + *(op1.x);
	return temp;
}

Chis Chis::operator=(Chis op1) {
	*this->x = *(op1.x);
	return *this;
}

bool Chis::operator<(Chis &op1) {
	if (*this->x < *(op1.x)) {
		return true;
	}
	else {
		return false;
	}
}

bool Chis::operator>(Chis &op1) {
	if (*this->x > *(op1.x)) {
		return true;
	}
	else {
		return false;
	}
}

Chis operator-(Chis op1, Chis op2) {
	Chis temp(op1);
	*temp.x = *(op1.x) - *(op2.x);
	return temp;
}

bool operator==(Chis &op1, Chis &op2) {
	if (*(op1.x) == *(op2.x)) {
		return true;
	}
	else {
		return false;
	}
}

bool operator!=(Chis &op1, Chis &op2) {
	if (*(op1.x) != *(op2.x)) {
		return true;
	}
	else {
		return false;
	}
}
