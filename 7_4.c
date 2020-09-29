#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	int v1, v2, s, t, sx;
	setlocale(LC_ALL, "Russian");
	printf("Скорость 1-го автомобиля = ");
	scanf_s("%d", &v1);
	printf("Скорость 2-го автомобиля = ");
	scanf_s("%d", &v2);
	printf("Расстояние между автомобилями = ");
	scanf_s("%d", &s);
	printf("Время в пути = ");
	scanf_s("%d", &t);
	sx = (v1 + v2) * t + s;
	printf("Расстояние между автомобилями через %d часов равно %d км.\n", t, sx);
}