#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, x;
	printf(" ������� �������� ������������ �(� �� ����� 0), � = ");
	scanf_s("%f", &a);
	printf(" ������� �������� ������������ b, b = ");
	scanf_s("%f", &b);
	x = -b / a;
	printf("x = %f", x);
}