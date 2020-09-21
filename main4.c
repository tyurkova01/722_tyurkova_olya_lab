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
		s = (a * a) + (b * b);
		d = (a * a) - (b * b);
		p = (a * a) * (b * b);
		c = (a * a) / (b * b);
	}
	printf("Summa kvadratov = %d.\n", s);
	printf("Proizvedenie kvadratov = %d. \n", p);
	printf("Raznoct' kvadratov = %d. \n", d);
	printf("Chastnoe = %f. \n", c);
}