#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	printf(" оордината x = ");
	scanf_s("%d", &x);
	printf(" оордината y = ");
	scanf_s("%d", &y);
	if (x > 0)
	{
		if (y > 0)
		{
			printf("“очка х лежит в 1 четверти координатной плоскости.\n");
		}
		else printf("“очка х лежит в 4 четверти координатной плоскости.\n");
	}
	else if (y > 0)
	{
		printf("“очка х лежит в 2 четверти координатной плоскости.\n");
	}
	else printf("“очка х лежит в 3 четверти координатной плоскости.\n");
}