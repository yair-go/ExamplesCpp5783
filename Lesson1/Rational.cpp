#include "Rational.h"

void Rational::setNumerator(int num)
{
	numerator = num;
}

void Rational::setDenominator(int num)
{
	denominator = num;
}

int Rational::getNumerator()
{
	return numerator;
}

int Rational::getDenominator()
{
	return denominator;
}

Rational::Rational(int num, int denom) : numerator(num), denominator(denom)
{
	
}

Rational Rational::square()
{
	return Rational(numerator * numerator, denominator * denominator);
}

void Rational::print()
{
	std::cout << numerator << '/' << denominator << std::endl;
}
