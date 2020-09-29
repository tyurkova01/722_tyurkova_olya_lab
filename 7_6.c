#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	float a1, b1, c1, a2, b2, c2, x, y;
	printf("a1 = ");
	scanf_s("%f", &a1);
	printf("b1 = ");
	scanf_s("%f", &b1);
	printf("c1 = ");
	scanf_s("%f", &c1);
	printf("a2 = ");
	scanf_s("%f", &a2);
	printf("b2 = ");
	scanf_s("%f", &b2);
	printf("c2 = ");
	scanf_s("%f", &c2);
	y = (c2 * a1 - a2 * c1) / (b2 * a1 - a2 * b1);
	x = (c1 - b1 * y) / a1;
	printf("x = %f.\n", x);
	printf("y = %f.\n", y);
}