#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float a, b, c, ac, bc, k;
	setlocale(LC_ALL, "Russian");
	printf("a = ");
	scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c);
	if (a < c < b)
	{
		ac = c - a;
		bc = b - c;
		k = ac * bc;
		printf("AB*BC = %f.\n", k);
	}
	else if (b < c < a)
	{
		ac = a - c;
		bc = c - b;
		k = ac * bc;
		printf("AС*BC = %f.\n", k);
	}
	else printf("не соответствует условию");
}