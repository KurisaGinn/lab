#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	printf("Введите первое число:");
	scanf_s("%d", &a);
	printf("Введите второе число:");
	scanf_s("%d", &b);
	c = ++a * b > 0 ? 1 : -1;
	printf("Результат: %d\n", c);

	int A;
	float B, C;
	printf("Введите первое челое число:");
	scanf_s("%d", &A);
	printf("Введите второе число:");
	scanf_s("%f", &B);
	C = (float)A / 2 * B;
	printf("Результат: %f", C);
	return 0;
}