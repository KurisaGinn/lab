#include <stdio.h>
#include <locale.h>
#include <math.h>
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	int N, a[100], i, l = -1;
	printf("Введите число ");
	scanf_s("%i", &N);
	for (i = 0; i < N; i++) {
		a[i] = l + 2;
		l = a[i];
	}
	for (i = 0; i < N; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	//2
	int A, D;
	printf("Введите 3 числа ");
	scanf_s("%i %i %i", &N, &A, &D);
	for (i = 0; i < N; i++) {
		a[i] = A * pow(D, i);
	}
	for (i = 0; i < N; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	//3
	int B;
	printf("Введите 3 числа ");
	scanf_s("%i %i %i", &N, &A, &B);
	int b[100] = { A, B };
	D = A;
	for (i = 2; i < N; i++) {
		b[i] = D + b[i - 1];
		D = b[i];
	}
	for (i = 0; i < N; i++) {
		printf("%i ", b[i]);
	}
	printf("\n");
	//4
	int* p;
	printf("Введите число чисел в массиве ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	p = &a[0];
	printf("%i ", *p);
	p = &a[N -1];
	printf("%i ", *p);
	p = &a[1];
	printf("%i ", *p);
	p = &a[N - 2];
	printf("%i ", *p);
	p = &a[2];
	printf("%i ", *p);
	p = &a[N - 3];
	printf("%i ", *p);
	printf("\n");
	//5
	printf("Введите число чисел в массиве ");
	scanf_s("%i", &N);
	printf("Введите числа массива ");
	for (i = 0; i < N; i++) {
		p = &a[i];
		scanf_s("%i", p);
	}
	for (i = 1; i < N; i += 2) {
		printf("%i ", a[i]);
	}
	if (((N - 1) % 2) == 0) {
		for (i = (N - 1); i > -1; i -= 2) {
			printf("%i ", a[i]);
		}
	}
	else {
		for (i = (N - 2); i > -1; i -= 2) {
			printf("%i ", a[i]);
		}
	}
}