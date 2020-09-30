#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, x;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	x = a / b;
	printf("Количество отрезков B, размещенных на отрезке А = %d.\n", x);
}