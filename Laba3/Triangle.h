#pragma once
#include "Area.h"
#include <iostream>

using namespace std;

class Triangle : public Area {
	double S;
	double a;
	double b;
public:
	Triangle();
	~Triangle();
	double Calc();
};
