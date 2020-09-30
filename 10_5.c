#include"stdio.h"
#include"math.h"
void main()
{
	int n, n1, n2;
	printf("n = ");
	scanf_s("%d", &n);
	if (n % 10 == n / 1000)
	{
		n = n / 10;
		n1 = n % 10;
		n = n / 10;
		n2 = n % 10;
		if (n1 == n2)
		{
			printf("true");
		}
	}
	else
	{
		printf("false");
	}
}