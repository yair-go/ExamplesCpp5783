#include "Rational.h"

void Rational::setNumerator(int num)
{
	numerator = num;
}

void Rational::setDenominator(int num)
{
	if (num > 0)
		denominator = num;
	if (num == 0)
		denominator = 1;
	if (num < 0)
	{
		denominator = -1 * num;
		numerator = -1 * numerator;
	}
}

int Rational::getNumerator()
{
	return numerator;
}

int Rational::getDenominator()
{
	return denominator;
}

Rational::Rational(int num, int denom) 
{
	numerator = num;
	denominator = denom;
}

Rational Rational::square()
{
	return Rational(numerator * numerator, denominator * denominator);
}

void Rational::print()
{
	std::cout << numerator << '/' << denominator << std::endl;
}
