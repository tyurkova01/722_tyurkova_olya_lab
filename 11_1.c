#include"stdio.h"
#include"math.h"
void main()
{
	int a, b;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	if (a != b)
	{
		if (a > b)
		{
			printf("a = %d, b = %d", a, a);
		}
		else { printf("a = %d, b = %d", b, b); }
	}
	else
	{
		a = 0, b = 0;
		printf("a = %d, b = %d", a, b);
	}
}