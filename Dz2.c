#include <stdio.h>
#include <locale.h>
int main()
{
	const float Shirina = 0.8;  // ������ �����
	float x = 4.0;  // ������ �����
	int B = 50;  // ���� �� 1 �� ���� �����
	float price = x * Shirina * B;
	setlocale(LC_CTYPE, "RUS");
	printf("������ ���� �����\n");
	printf("=================\n");
	printf("���� �� 1 �� � ����� ����� %d ������\n", B);
	printf("����� ������� %.1f ������ � ������� %.1f ������\n", x, Shirina);
	printf("���� ����� ����� �����: %.1f ������\n", price);
}