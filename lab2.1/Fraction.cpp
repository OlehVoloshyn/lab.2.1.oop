#include <iostream>
//#include <string>
#include <sstream>
#include "Fraction.h"

using namespace std;

string Fraction::toString() const
{
	stringstream ss;
			ss << "First = " << first << endl;
			ss << "Second = " << second << endl;
			return ss.str();
}

Fraction::Fraction()
{
	first = 0;
	second = 1;
}

Fraction::Fraction(int f ,int s)
{
	first = f;
	second = s;
}

Fraction::Fraction(const Fraction& r)
{
	first = r.first;
	second = r.second;
}

Fraction::~Fraction()
{
}

int Fraction::Ipart() const
{
	if (first >= 0 && second > 0)
	{

		return floor(first / second);
	}
	else
		return -1;

}

void Fraction::Init(int a, int b)
{
	setFirst(a);
	setSecond(b);
}

Fraction& Fraction::operator = (const Fraction& r)
{
	first = r.first;
	second = r.second;
	return *this;
}

Fraction& Fraction::operator++()
{
	first++;
	return *this;

}

Fraction& Fraction::operator--()
{
	first--;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction t(*this);
	second++;
	return t;

}

Fraction Fraction::operator--(int)
{
	Fraction t(*this);
	second--;
	return t;
}



 void Display(Fraction r)
{
	cout << r.toString();
}

Fraction Read()
{
	int a, b;
	Fraction z;

	cout << "Enter the numerator and denominator of the fraction - natural numbers" << endl;
	cout << "numerator ="; cin >> a;
	cout << endl;
	cout << "denominator ="; cin >> b;
	z.Init(a, b);
	return z;
}

ostream& operator<<(ostream& out, const Fraction& r)
{
	out << r.toString();
	return out;
}




