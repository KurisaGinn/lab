#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	int a[100], N, L, K, i;
	int* p;
	float s = 0;
	printf("Введите 3 числа ");
	scanf_s("%i %i %i", &N, &K, &L);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	for (i = (K - 1); i <= (L - 1); i++) {
		s += a[i];
	}
	s = s / (L - K + 1);
	printf("%f - среднее арифмитическое\n", s);
	//2
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	int* k;
	p = &a[0];
	k = &a[1];
	L = *k - *p;
	for (i = 2; i < N; i++) {
		if ((a[i] - a[i - 1]) != L) {
			L = 0;
			break;
		}
	}
	printf("%i - результат\n", L);
	//3
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	int m = a[1];
	for (i = 3; i < N; i += 2) {
		if (a[i] < m) {
			m = a[i];
		}
	}
	printf("%i - минимальный элемент\n", m);
	//4
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	for (i = 1; i < (N - 1); i++) {
		if ((a[i] > a[i - 1]) & ((a[i] > a[i + 1]))) {
			m = i + 1;
		}
	}
	printf("%i - номер последнего лок. максимума\n", m);
	//5
	int j;
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if ((a[i] == a[j]) & (i != j)) {
				L = i + 1;
				K = j + 1;
			}
		}
	}
	if (L < K) {
		printf("%i %i - номера чисел с одинаковыми значениями", L, K);
	}
	else {
		printf("%i %i - номера чисел с одинаковыми значениями", K, L);
	}
}
	