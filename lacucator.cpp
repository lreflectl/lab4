#include "calculator.h"

int Lacucator::la_Add (double a, double b)
{
	return a + b;
}

int Lacucator::la_Sub (double a, double b)
{
	return la_Add(a, -b);
}

int Lacucator::la_Mult (double a, double b)
{
	return a * b;
}
double Lacucator::la_Pi ()
{
	return 3.14159265358979323846;
}
