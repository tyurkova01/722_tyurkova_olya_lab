#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	float a, ar;
	float const pi = 3.14;
	setlocale(LC_ALL, "Russian");
	printf("���� � � �������� = ");
	scanf_s("%f", &a);
	ar = pi * a / 180; 
	printf("���� � � �������� = %f.\n", ar);
}