#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, x, bx, y;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	x = a / b;
	bx = b * x;
	y = a - bx;
	printf("Длина незанятой части отрезкa А = %d.\n", y);
}