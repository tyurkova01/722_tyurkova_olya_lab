#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	int x1, y1, x2, y2, a, b, R1, R2, s, p;
	setlocale(LC_ALL, "Russian");
	printf("x1 = ");
	scanf_s("%d", &x1);
	printf("y1 = ");
	scanf_s("%d", &y1);
	printf("x2 = ");
	scanf_s("%d", &x2);
	printf("y2 = ");
	scanf_s("%d", &y2);
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	s = a * b;
	p = 2 * (a + b);
	printf("Площадь равна %d.\n", s);
	printf("Периметр равен %d.\n", p);
}