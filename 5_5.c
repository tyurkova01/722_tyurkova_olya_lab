#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float x1, y1, x2, y2, x3, y3, k, t, a, b, c, s, p, pp, ap, cp, bp, r;
	setlocale(LC_ALL, "Russian");
	printf("x1 = ");
	scanf_s("%f", &x1);
	printf("y1 = ");
	scanf_s("%f", &y1);
	printf("x2 = ");
	scanf_s("%f", &x2);
	printf("y2 = ");
	scanf_s("%f", &y2);
	printf("x3 = ");
	scanf_s("%f", &x3);
	printf("y3 = ");
	scanf_s("%f", &y3);
	{
		k = x2 - x1;
		t = y2 - y1;
		a = sqrt(pow(k, 2) + pow(t, 2));
		k = x3 - x1;
		t = y3 - y1;
		b = sqrt(pow(k, 2) + pow(t, 2));
		k = x3 - x2;
		t = y3 - y2;
		c = sqrt(pow(k, 2) + pow(t, 2));
		p = a + b + c;
		pp = p / 2;
		ap = pp - a;
		bp = pp - b;
		cp = pp - c;
		r = pp * ap * bp * cp;
		s = sqrt(r);
	}
	printf("Площадь треугольника равна %f.\n", s);
	printf("Периметр треугольника равен %f.\n", p);
}