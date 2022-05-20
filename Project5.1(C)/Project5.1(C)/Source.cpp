#include "Complex1.h"
#include "Complex2.h"
#include <iostream>

using namespace std;

int main()
{
	Complex1 x, y;
	cin >> x >> y;

	try
	{
		cout << "x * y = " << x * y << endl << endl;
		cout << "x + y = " << x + y << endl << endl;
		cout << "x == y : ";
		if (x == y)
			cout << "True\n" << endl;
		else
			cout << "False\n" << endl;
	}

	catch (E e)
	{
		cout << e.What() << endl << endl;
	}

	catch (Error& e)
	{
		cout << e.What() << endl << endl;
	}

	catch (bad_exception a)
	{
		cout << a.what() << endl << endl;
	}


	Complex2 a, b;
	cin >> a >> b;

	try
	{
		cout << "a * b = " << a * b << endl << endl;
		cout << "a + b = " << a + b << endl << endl;
		cout << "a == b : ";
		if (a == b)
			cout << "True\n" << endl;
		else
			cout << "False\n" << endl;
	}

	catch (E e)
	{
		cout << e.What() << endl << endl;
	}

	catch (Error& e)
	{
		cout << e.What() << endl << endl;
	}

	catch (bad_exception a)
	{
		cout << a.what() << endl << endl;
	}

	return 0;
}