// задание №1
#include "stdio.h"
void main()
{
	int a, b, s, p;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	{
		s = a * b; //поиск площади
		p = 2 * (a + b); //поиск периметра
	}
	printf("S = %d.", s);
	printf("P = %d.", p);
}