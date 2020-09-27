#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float a, b, c, ac, ab, s;
	setlocale(LC_ALL, "Russian");
	printf("a = ");
    scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c);
	{
		ac = abs(c - a);
		ab = abs(b - a);
		s = ac + ab;
	}
	printf("Длина отрезка AC равна %f. \n", ac);
	printf("Длина отрезка AB равна %f. \n", ab);
	printf("Сумма длин отрезков AC и AB равна %f. \n", s);
}
