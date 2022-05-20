#pragma once
#include "Complex.h"

class Complex2 :
	private Complex
{
public:
	Complex2();
	Complex2(double, double);
	Complex2(const Complex2&);

	friend ostream& operator <<(ostream&, const Complex2&);
	friend istream& operator >>(istream&, Complex2&);

	friend Complex2 operator + (const Complex2&, const Complex2&);
	friend Complex2 operator * (const Complex2&, const Complex2&);
	friend bool operator == (const Complex2&, const Complex2&);
};
