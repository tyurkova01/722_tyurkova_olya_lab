#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2, x3, y3, x21, y21, x31, y31;
	float ab, ac;
	printf("Координата x точки а = ");
	scanf_s("%d", &x1);
	printf("Координата y точки а = ");
	scanf_s("%d", &y1);
	printf("Координата x точки b = ");
	scanf_s("%d", &x2);
	printf("Координата y точки b = ");
	scanf_s("%d", &y2);
	printf("Координата x точки c = ");
	scanf_s("%d", &x3);
	printf("Координата y точки c = ");
	scanf_s("%d", &y3);
	x21 = x2 - x1;
	y21 = y2 - y1;
	ab = sqrt(pow(x21, 2) + pow(y21, 2));
	x31 = x3 - x1;
	y31 = y3 - y1;
	ac = sqrt(pow(x31, 2) + pow(y31, 2));
	if (ab < ac)
	{
		printf("Точка B ближе к точке A. Расстояние между ними = %f.\n", ab);
	}
	else if (ac < ab)
	{
		printf("Точка C ближе к точке A. Расстояние между ними = %f.\n", ac);
	}
	else printf("Точки В и С равноудалены от точки А. Расстояние до точки А = %f.\n", ac);
}