#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int k, n, d;
	printf("����� ��� ���� = ");
	scanf_s("%d", &k);
	printf("����� ��� ������ = ");
	scanf_s("%d", &n);
	d = ((k + n - 2) % 7) + 1;
	printf("����� ��� ������ %d-�� ��� = %d.\n", k, d);
}