#include"stdio.h"
void main()
{
	int n, s;
	printf("n = ");
	scanf_s("%d", &n);
	s = n % 60;
	printf("s = %d", s);
}