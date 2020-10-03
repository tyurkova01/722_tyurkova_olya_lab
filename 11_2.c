#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, s;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);
	if (a >= b)
	{
		if (b >= c)
		{
			s = a + b;
		}
		else s = a + c;
	}
	else if (a >= c)
	{
		s = a + b;
	}
	else s = b + c;
	printf("Сумма двух наибольших чисел = %d.\n", s);
}