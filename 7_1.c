#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float a, ar;
	float const pi = 3.14;
	setlocale(LC_ALL, "Russian");
	printf("”гол а в градусах = ");
	scanf_s("%f", &a);
	ar = pi * a / 180; 
	printf("”гол а в радианах = %f.\n", ar);
}