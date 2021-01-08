#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	float a;
	int b;
	printf("Введите размер в байтах ");
	scanf_s("%f", &a);
	b = a / 1024;
	printf("%i - кол-во целых килобайтов\n", b);
	//2
	int A, B, C;
	printf("Введите два числа через пробел ");
	scanf_s("%i %i", &A, &B);
	C = A / B;
	printf("%i - кол-во отрезков\n", C);
	//3
	printf("Введите два числа через пробел ");
	scanf_s("%i %i", &A, &B);
	C = A - B * (A / B);
	printf("%i - незанятая часть\n", C);
	//4
	int d, k, l;
	printf("Введите двухзначное число ");
	scanf_s("%i", &d);
	k = d / 10;
	l = d % 10;
	d = l * 10 + k;
	printf("%i - число после перестановки цифр\n", d );
	//5
	printf("Введите трёхзначное число ");
	scanf_s("%i", &d);
	k = d / 100;
	l = d / 10 % 10;
	b = d % 10;
	d = l * 100 + b * 10 + k;
	printf("%i - число после перестановки цифр\n", d);
}