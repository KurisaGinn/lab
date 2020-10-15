#include <stdio.h>
#include <locale.h>
#include <math.h>
void main() {
	setlocale(LC_ALL, "Rus");
	float A, B, a, b, c, C, x, y;
	//1
	printf("Введите 2 числа: ");
	scanf_s("%f %f", &A, &B);
	a = A;
	A = B;
	B = a;
	printf("A = %f, B = %f\n", A, B);
	//2
	printf("Введите 3 числа: ");
	scanf_s("%f %f %f", &A, &B, &C);
	b = B;
	c = C;
	B = A;
	C = b;
	A = c;
	printf("A = %f, B = %f, C = %f\n", A, B, C);
	//3
	printf("Введите 2 числа: ");
	scanf_s("%f %f %f", &A, &B, &C);
	c = C;
	b = B;
	C = A;
	B = c;
	A = b;
	printf("A = %f, B = %f, C = %f\n", A, B, C);
	//4
	printf("Введите значение х: ");
	scanf_s("%f", &x);
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("Значени функции = %f\n", y);
	//5
	printf("Введите значение х: ");
	scanf_s("%f", &x);
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	printf("Значени функции = %f\n", y);
	//6
	printf("Введите число: ");
	scanf_s("%f", &A);
	a = A * A;
	B = a * a * a * a;
	printf("Результат = %f\n", B);
	//7
	printf("Введите число: ");
	scanf_s("%f", &A);
	a = A * A;
	b = A * A * A;
	B = a * a * a * b * b * b;
	printf("Результат = %f\n", B);
}