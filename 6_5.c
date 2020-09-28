#include"stdio.h"
#include"math.h"
void main()
{
	int x, y, a;
	printf("x = ");
	scanf_s("%d", &x);
	a = x - 3;
	y = 4 * pow(a, 6) - 7 * pow(a, 3) + 2;
	printf("y = %d", y);
}