#pragma once
#define _USE_MATH_DEFINES
#include "Area.h"
#include <iostream>
#include <math.h>

using namespace std;

class Circle: public Area {
	double S;
	double r;
public:
	Circle();
	~Circle();
	double Calc();
};
