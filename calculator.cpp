#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mult (double a, double b)
{
	return a * b;
}
double Calculator::Pi ()
{
	return 3.141592653589793238462643;
}
