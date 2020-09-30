#include"stdio.h"
#include"math.h"
void main()
{
	int n, n1, n2, n3;
	printf("n = ");
	scanf_s("%d", &n);
	n1 = n % 10;
	n = n / 10;
	n2 = n % 10;
	n = n / 10;
	n3 = n % 10;
	if ((n1 < n2) & (n2 < n3))
	{
		printf("true");
	}
	else if ((n3 < n2) & (n2 < n1))
	{
		printf("true");
	}
	else { printf("false"); }
}