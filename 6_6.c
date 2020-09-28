#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	int a, a8;
	setlocale(LC_ALL, "Russian");
	printf("a = ");
	scanf_s("%d", &a);
	a8 = a * a;
	a8 = a8 * a8;
	a8 = a8 * a8;
	printf("Число А в 8 степени равно %d.\n", a8);
}