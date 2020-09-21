#include"stdio.h"
void main()
{
	int a, b;
	float s;

	printf("a =");
	scanf_s("%d", &a);

	printf("b =");
	scanf_s("%d", &b);

	{
		s = (a + b) / 2;
	}
	printf("Srednee arifmeticheskoe = %f.\n", s);
}