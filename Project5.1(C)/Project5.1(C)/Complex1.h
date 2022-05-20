#pragma once
#include "Complex.h"

class Complex1 :
	public Complex
{
public:
	Complex1();
	Complex1(double, double);
	Complex1(const Complex1&);

	friend Complex1 operator + (const Complex1&, const Complex1&);
	friend Complex1 operator * (const Complex1&, const Complex1&);
	friend bool operator == (const Complex1&, const Complex1&);
};
