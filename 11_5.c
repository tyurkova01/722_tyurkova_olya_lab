#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf(" x = ");
	scanf_s("%d", &x);
	if (x == 0) { printf("x - ������� �����"); }
	else if (x > 0)
	{
		printf("����� � - �������������");
	}
	else printf("����� � - �������������");
	if (x % 2 == 0)
	{
		printf(" ������.");
	}
	else printf(" ��������.");
}