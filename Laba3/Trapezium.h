#pragma once
#include "Area.h"
#include <iostream>

using namespace std;

class Trapezium : public Area {
	double S;
	double a;
	double b;
	double h;
public:
	Trapezium();
	~Trapezium();
	double Calc();
};
