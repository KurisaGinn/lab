#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	printf("¬ведите первое число:");
	scanf_s("%d", &a);
	printf("¬ведите второе число:");
	scanf_s("%d", &b);
	c = ++a * b > 0 ? 1 : -1;
	printf("–езультат: %d\n", c);

	int A;
	float B, C;
	printf("¬ведите первое челое число:");
	scanf_s("%d", &A);
	printf("¬ведите второе число:");
	scanf_s("%f", &B);
	C = (float)A / 2 * B;
	printf("–езультат: %f", C);
	return 0;
}