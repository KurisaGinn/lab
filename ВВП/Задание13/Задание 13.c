#include <stdio.h>
#include <locale.h>
#include <math.h>
float ch(float x, float y) {
	return x * y;
}
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	float a;
	printf("Введите стоимость 1 кг конфет ");
	scanf_s("%f", &a);
	printf("%f - стоимость 0,1 кг конфет\n", ch(a, 0.1));
	printf("%f - стоимость 0,2 кг конфет\n", ch(a, 0.2));
	printf("%f - стоимость 0,3 кг конфет\n", ch(a, 0.3));
	printf("%f - стоимость 0,4 кг конфет\n", ch(a, 0.4));
	printf("%f - стоимость 0,5 кг конфет\n", ch(a, 0.5));
	printf("%f - стоимость 0,6 кг конфет\n", ch(a, 0.6));
	printf("%f - стоимость 0,7 кг конфет\n", ch(a, 0.7));
	printf("%f - стоимость 0,8 кг конфет\n", ch(a, 0.8));
	printf("%f - стоимость 0,9 кг конфет\n", ch(a, 0.9));
	printf("%f - стоимость 1 кг конфет", ch(a, 1));
	printf("\n");
	//2
	int N, i;
	printf("");
	printf("Ведите число ");
	scanf_s("%i", &N);
	float k = 1.1, l = 1;
	for (i = 1; i <= N; i++) {
		l = l * k;
		k += 0.1;
	}
	printf("%f - произведение %i - сомножетелей\n", l, N);
	//3
	int m;
	printf("Введите число ");
	scanf_s("%i", &N);
	for (m = 1, i = 0; m <= (2*N - 1); m += 2) {
		i = i + m;
		printf("%i - текущее значение суммы\n", i);
	}
	//4
	float A;
	printf("Введите два числа ");
	scanf_s("%f %i", &A, &N);
	for (i = 1, m = 1; i <= N; i++) {
		m = m +  pow(A, i);
	}
	printf("%i - значение выражения\n", m);
	//5
	int p = 1;
	printf("Введите два числа ");
	scanf_s("%f %i", &A, &N);
	for (i = 1, m = 1; i <= N; i++) {
		p = p * (-1);
		m = m + p * pow(A, i);
	}
	printf("%i - значение выражения", m);
}