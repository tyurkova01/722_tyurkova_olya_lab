#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float x1, y1, x2, y2, s, a, b;
	setlocale(LC_ALL, "Russian");
	printf("x1 = ");
	scanf_s("%f", &x1);
	printf("y1 = ");
	scanf_s("%f", &y1);
	printf("x2 = ");
	scanf_s("%f", &x2);
	printf("y2 = ");
	scanf_s("%f", &y2);
	{
		a = x2 - x1;
		b = y2 - y1;
		s = sqrt(pow(a, 2) + pow(b, 2));
	}
	

	printf("Расстояние между точками на координатной плоскости = %f. \n", s);
}