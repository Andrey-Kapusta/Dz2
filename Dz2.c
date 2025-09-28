#include <stdio.h>
#include <locale.h>
int main()
{
	const float Shirina = 0.8;  // ширина ткани
	float x = 4.0;  // длинна ткани
	int B = 50;  // цена за 1 кв метр ткани
	float price = x * Shirina * B;
	setlocale(LC_CTYPE, "RUS");
	printf("Расчёт цены ткани\n");
	printf("=================\n");
	printf("Цена за 1 кв м ткани равна %d рублей\n", B);
	printf("Ткань длинной %.1f метров и шириной %.1f метров\n", x, Shirina);
	printf("Цена такой ткани равна: %.1f рублей\n", price);
}