#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf(" x = ");
	scanf_s("%d", &x);
	if (x % 2 == 0)
	{
		printf("Четное");
	}
	else printf("Нечетное");
	if (x / 100 > 1)
	{
		printf(" трехзачное число.");
	}
	else if (x / 10 > 1)
	{
		printf(" двузначное число.");
	}
}