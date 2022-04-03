#include <string>
#pragma once
using namespace std;
class Fraction
{
private:
	int first, second;
public:
	void setFirst(int first) { this->first = first; }
	void setSecond(int second) { this->second = second; }
	int getFirst() { return first; }
	int getSecond() { return second; }
	

	Fraction();
	Fraction(int f, int s);
	Fraction(const Fraction& r);
	~Fraction();

	int Ipart() const;
	void Init(int a, int b);
	string toString() const;

	friend void Display(Fraction r);
	friend Fraction Read();
	friend ostream& operator << (ostream&, const Fraction&);
	
	Fraction& operator = (const Fraction&);
	
	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);


};

