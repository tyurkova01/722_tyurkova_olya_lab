#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	printf("���������� x = ");
	scanf_s("%d", &x);
	printf("���������� y = ");
	scanf_s("%d", &y);
	if (x > 0)
	{
		if (y > 0)
		{
			printf("����� � ����� � 1 �������� ������������ ���������.\n");
		}
		else printf("����� � ����� � 4 �������� ������������ ���������.\n");
	}
	else if (y > 0)
	{
		printf("����� � ����� � 2 �������� ������������ ���������.\n");
	}
	else printf("����� � ����� � 3 �������� ������������ ���������.\n");
}