#pragma once

#include <iostream>
#include <math.h>
using namespace std;

class Vector
{
public:
	void SetX(double);
	void SetY(double);
	double GetY();
	double GetX();
	double lenght(double, double);
	Vector(double x = 0, double y = 0)
	{
		X = x;
		Y = y;
	}
	void print();
	double scalar(double, double);
private:
	double X;
	double Y;
};