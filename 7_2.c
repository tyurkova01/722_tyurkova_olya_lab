#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float a, ar;
	float const pi = 3.14;
	setlocale(LC_ALL, "Russian");
	printf("”гол а в радианах = ");
	scanf_s("%f", &ar);
	a = 180 * ar / pi;
	printf("”гол а в градусах = %f.\n", a);
}