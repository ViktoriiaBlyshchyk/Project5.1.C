#include "Complex2.h"

Complex2::Complex2()
{
	SetX(0);
	SetY(0);
}

Complex2::Complex2(double x, double y)
{
	SetX(x);
	SetY(y);
}

Complex2::Complex2(const Complex2& c)
{
	SetX(c.GetX());
	SetY(c.GetY());
}

ostream& operator << (ostream& out, const Complex2& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Complex2& c)
{
	double x, y;
	cout << "Real: "; in >> x;
	cout << "Image: "; in >> y;

	c.SetX(x);
	c.SetY(y);
	return in;
}

Complex2 operator + (const Complex2& a, const Complex2& b)
{
	if (a.GetX() == 0) { throw E("E error"); }
	if (a.GetY() == 0) { throw Error("Error error"); }
	if (b.GetX() == 0) { throw bad_exception(); }

	return Complex2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

Complex2 operator * (const Complex2& a, const Complex2& b)
{
	if (a.GetX() == 0) { throw E("E error"); }
	if (a.GetY() == 0) { throw Error("Error error"); }
	if (b.GetX() == 0) { throw bad_exception(); }

	return Complex2(a.GetX() * b.GetX() - a.GetY() * b.GetY(),
		a.GetX() * b.GetY() + a.GetY() * b.GetX());
}

bool operator == (const Complex2& a, const Complex2& b)
{
	if (a.GetX() == 0) { throw E("E error"); }
	if (a.GetY() == 0) { throw Error("Error error"); }
	if (b.GetX() == 0) { throw bad_exception(); }

	return a.GetX() == b.GetX() && a.GetY() == b.GetY();
}
