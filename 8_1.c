#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int b, kb;
	printf("������ ����� � ������ = ");
	scanf_s("%d", &b);
	kb = b / 1024;
	printf("������ ����� � ���������� = %d.", kb);
}