#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

#define M_PI 3.14159265358979323846
using namespace std;

class Area {
public:
	Area() {};
	virtual ~Area() {};
	virtual double Calc() = 0;
	bool FileCheck(ifstream& pFile);
};