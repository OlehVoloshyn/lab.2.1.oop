#include "Fraction.h"
#include <iostream>
//#include "Fraction.cpp"

using namespace std;
int main()
{
	

	Fraction Read();
	Fraction a(4, 2);
	Fraction b(1, 3);
	Fraction c, d;

	cout << a++ << endl;
	cout << a-- << endl;
	cout << ++a << endl;
	cout << --a << endl;

	c = a;
	Fraction s(b);
	d = Read();

	

	Display(c);
	Display(s);
	Display(d);
	
	cout << d.Ipart();
}