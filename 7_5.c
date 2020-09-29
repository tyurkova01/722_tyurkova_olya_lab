#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, x;
	printf(" Введите значение коэффициента а(а не равно 0), а = ");
	scanf_s("%f", &a);
	printf(" Введите значение коэффициента b, b = ");
	scanf_s("%f", &b);
	x = -b / a;
	printf("x = %f", x);
}