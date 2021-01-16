#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	int N, a[100], i;
	int* p;
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	int b[100], t;
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &b[i];
		scanf_s("%i", p);
	}
	for (i = 0; i < N; i++) {
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	for (i = 0; i < N; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	for (i = 0; i < N; i++) {
		printf("%i ", b[i]);
	}
	printf("\n");
	//2
	int j;
	float B[100], s = 0;
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	for (i = 0; i < N; i++) {
		for (j = 0, s = 0; j <= i; j++) {
			s += a[j];
		}
		s = s / j;
		B[i] = s;
	}
	for (i = 0; i < N; i++) {
		printf("%f ", B[i]);
	}
	printf("\n");
	//3
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	for (i = 0; i < N; i++) {
		if ((a[i] % 2) != 0) {
			t = a[i];
		}
	}
	for (i = 0; i < N; i++) {
		if ((a[i] % 2) != 0) {
			a[i] += t;
		}
	}
	for (i = 0; i < N; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	//4
	int l = 0, f, v;
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	f = a[0];
	v = a[0];
	for (i = 1; i < N; i++) {
		if (f < a[i]) {
			f = a[i];
			t = i;
		}
		if (v > a[i]) {
			v = a[i];
			l = i;
		}
	}
	if (l > t) {
		for (i = (t + 1); i < l; i++) {
			a[i] = 0;
		}
	}
	else {
		for (i = (l + 1); i < t; i++) {
			a[i] = 0;
		}
	}
	for (i = 0; i < N; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	//5
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	t = a[0];
	for (i = 1; i < N; i++) {
		if (t > a[i]) {
			a[i - 1] = a[i];
		}
		else {
			a[i - 1] = t;
		}
	}
	for (i = 0; i < N; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
}