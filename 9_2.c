#include"stdio.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL,"Russian");
	int k, d;
	printf("k = ");
	scanf_s("%d", &k);
	d = k % 7;
	if (d == 1) {
		printf("%d-�� ���� ���� - �����������.\n", k);
	}
	else if (d == 2) {
		printf("%d-�� ���� ���� - �������.\n", k);
	}
	else if (d == 3) {
		printf("%d-�� ���� ���� - �����.\n", k);
	}
	else if (d == 4) {
		printf("%d-�� ���� ���� - �������.\n", k);
	}
	else if (d == 5) {
		printf("%d-�� ���� ���� - �������.\n", k);
	}
	else if (d == 6) {
		printf("%d-�� ���� ���� - �������.\n", k);
	}
	else if (d == 0) {
		printf("%d-�� ���� ���� - �����������.\n", k);
	}
}