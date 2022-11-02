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
	
	Rational(int num = 1, int denom = 1);
	
	Rational square();
	void print();
};

