#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float a, b, c, ac, ab, s;
	setlocale(LC_ALL, "Russian");
	printf("a = ");
    scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c);
	{
		ac = abs(c - a);
		ab = abs(b - a);
		s = ac + ab;
	}
	printf("����� ������� AC ����� %f. \n", ac);
	printf("����� ������� AB ����� %f. \n", ab);
	printf("����� ���� �������� AC � AB ����� %f. \n", s);
}
