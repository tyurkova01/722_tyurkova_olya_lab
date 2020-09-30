#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	printf("a = ");
	scanf_s("%d", &a);
	a = a % 10 * 10 + a / 10;
	printf("Число, полученное при перестановке цифр исходного числа = %d.\n", a);
}