#include"stdio.h"
void main()
{
	int a, b, d, s, p;
	float c;
	printf("a = ");
	scanf_s("%d", &a);
	printf("b = ");
	scanf_s("%d", &b);
	{
		s = abs(a) + abs(b);
		d = abs(a) - abs(b);
		p = abs(a) * abs(b);
		c = abs(a) / abs(b);
	}
	printf("Summa moduley = %d.\n", s);
	printf("Proizvedenie moduley = %d. \n", p);
	printf("Raznoct' moduley = %d. \n", d);
	printf("Chastnoe moduley = %f. \n", c);
}