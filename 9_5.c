#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int n, s;
	printf("n = ");
	scanf_s("%d", &n);
	s = n / 100 + 1;
	printf("%d ��� - ��� %d ��������.\n", n,s);
}