#include"stdio.h"
#include"math.h"
#include"locale.h"
void main()
{
	setlocale(LC_ALL, "Russian");
	int b, kb;
	printf("Размер файла в байтах = ");
	scanf_s("%d", &b);
	kb = b / 1024;
	printf("Размер файла в килобайтах = %d.", kb);
}