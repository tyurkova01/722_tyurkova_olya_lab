#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, x3, y3, x21, y21, x31, y31;
	float ab, ac;
	printf("���������� x ����� � = ");
	scanf_s("%d", &x1);
	printf("���������� y ����� � = ");
	scanf_s("%d", &y1);
	printf("���������� x ����� b = ");
	scanf_s("%d", &x2);
	printf("���������� y ����� b = ");
	scanf_s("%d", &y2);
	printf("���������� x ����� c = ");
	scanf_s("%d", &x3);
	printf("���������� y ����� c = ");
	scanf_s("%d", &y3);
	x21 = x2 - x1;
	y21 = y2 - y1;
	ab = sqrt(pow(x21, 2) + pow(y21, 2));
	x31 = x3 - x1;
	y31 = y3 - y1;
	ac = sqrt(pow(x31, 2) + pow(y31, 2));
	if (ab < ac)
	{
		printf("����� B ����� � ����� A. ���������� ����� ���� = %f.\n", ab);
	}
	else if (ac < ab)
	{
		printf("����� C ����� � ����� A. ���������� ����� ���� = %f.\n", ac);
	}
	else printf("����� � � � ������������ �� ����� �. ���������� �� ����� � = %f.\n", ac);
}