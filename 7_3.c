#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float x, a, y, one, ys;
	setlocale(LC_ALL, "Russian");
	printf("x = ");
	scanf_s("%f", &x);
	printf("a = ");
	scanf_s("%f", &a);
	one = a / x;
	printf("y = ");
	scanf_s("%f", &y);
	ys = one * y;
	printf("1 кг конфет стоит %f рублей.\n", one);
	printf("%f кг конфет стоят %f рублей.\n", y, ys);
}