#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, sp, sk, s, k;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	printf("c = ");
	scanf_s("%d", &c);
	sp = a * b;
	sk = pow(c, 2);
	s = sp % sk;
	k = sp / sk;
	printf("Количество квадратов = %d.\n", k);
	printf("Площадь незанятой части прямоугольника = %d.\n", s);
}