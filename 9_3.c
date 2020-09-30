#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int k, n, d;
	printf("Номер дня года = ");
	scanf_s("%d", &k);
	printf("Номер дня недели = ");
	scanf_s("%d", &n);
	d = ((k + n - 2) % 7) + 1;
	printf("Номер дня недели %d-го дня = %d.\n", k, d);
}