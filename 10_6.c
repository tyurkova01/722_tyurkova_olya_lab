#include"stdio.h"
#include"math.h"
void main()
{
	int a, b, c;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);
	if (pow(a, 2) == pow(b, 2) + pow(c, 2))
	{
		printf("true");
	}
	else if (pow(b, 2) == pow(a, 2) + pow(c, 2))
	{
		printf("true");
	}
	else if (pow(c, 2) == pow(b, 2) + pow(a, 2))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}