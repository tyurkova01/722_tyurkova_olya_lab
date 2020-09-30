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
	if ((a<(b+c))&(b<(a+c))&(c<(a+b)))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}