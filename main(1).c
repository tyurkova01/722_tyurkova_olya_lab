// ������� �1
#include "stdio.h"
void main()
{
	int a, b, s, p;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	{
		s = a * b; //����� �������
		p = 2 * (a + b); //����� ���������
	}
	printf("S = %d.", s);
	printf("P = %d.", p);
}