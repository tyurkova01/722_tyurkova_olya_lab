#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	int a, b, x;
	setlocale(LC_ALL, "Russian");
	printf("a = ");
	scanf_s("%d", &a);
	b = a * a;
	x = b * a;
	b = x * x;
	b = b * b;
	b = b * x;
	printf("����� � � 15 ������� ����� %d.\n", b);
}