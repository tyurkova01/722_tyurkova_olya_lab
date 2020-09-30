#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("x = ");
	scanf_s("%d", &x);
	x = x % 100 * 10 + x / 100;
	printf("Полученное число = %d.\n", x);
}