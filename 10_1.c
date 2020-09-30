#include"stdio.h"
#include"math.h"
void main()
{
	int a, b;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	if ((a > 2) & (b <= 3))
	{
		printf("true");
	}
	else { printf("false"); }
}