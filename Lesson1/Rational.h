#pragma once
#include <iostream>

class Rational
{
private:
	int numerator;
	int denominator;
public:
	void setNumerator(int);
	void setDenominator(int);

	int getNumerator();
	int getDenominator();
	
	Rational(int, int);

	Rational square();
	void print();
};

