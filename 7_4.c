#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	int v1, v2, s, t, sx;
	setlocale(LC_ALL, "Russian");
	printf("�������� 1-�� ���������� = ");
	scanf_s("%d", &v1);
	printf("�������� 2-�� ���������� = ");
	scanf_s("%d", &v2);
	printf("���������� ����� ������������ = ");
	scanf_s("%d", &s);
	printf("����� � ���� = ");
	scanf_s("%d", &t);
	sx = (v1 + v2) * t + s;
	printf("���������� ����� ������������ ����� %d ����� ����� %d ��.\n", t, sx);
}