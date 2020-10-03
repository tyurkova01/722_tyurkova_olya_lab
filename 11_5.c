#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf(" x = ");
	scanf_s("%d", &x);
	if (x == 0) { printf("x - нулевое число"); }
	else if (x > 0)
	{
		printf("Число х - положительное");
	}
	else printf("Число х - отрицательное");
	if (x % 2 == 0)
	{
		printf(" четное.");
	}
	else printf(" нечетное.");
}