#include "Rational.h"
#include <iostream>
#include <string>
#include "main.h"
using namespace std;

int main()
{
	int num1 = 1, num2 = 1, num3;
	char junk;

	/*cout << "part 1.  set/get" << endl;
	cout << "enter a rational number:" << endl;
	cin >> num1 >> junk >> num2;*/
	Rational rat1(2,5);

	rat1.square().print();

	Rational rat5 = rat1.square();

	rat1.setNumerator(num1);
	rat1.setDenominator(num2);
	cout << "numerator: " << rat1.getNumerator() << endl;
	cout << "denominator: " << rat1.getDenominator() << endl;

	cout << "enter a rational number:" << endl;
	cin >> num1 >> junk >> num2;
	Rational rat2;
	rat2.setNumerator(num1);
	rat2.setDenominator(num2);
	rat2.print();
	cout << endl << endl;

	/*cout << "part 2.  equals" << endl;
	if (rat1.equal(rat2))
		cout << "The two numbers are equal" << endl;
	else
		cout << "The two numbers are different" << endl;
	cout << endl << endl;

	cout << "part 3. add" << endl;
	Rational ans = rat1.add(rat2);
	rat1.print();
	cout << "+ ";
	rat2.print();
	cout << "= ";
	ans.print();*/
	cout << endl;

	return 0;
}
