#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	int A, B, i, j;
	printf("Введите 2 числа ");
	scanf_s("%i %i", &A, &B);
	for (i = A; i <= B; i++) {
		for (j = 1; j <= i; j++) {
			printf("%i ", i);
		}
	}
	printf("\n");
	//2
	printf("Введите 2 числа ");
	scanf_s("%i %i", &A, &B);
	i = B;
	while ((i < A) & (A >= (i + B))) {
		i += B;
	}
	i = A - i;
	printf("%i - незанятая часть\n", i);
	//3
	int N, K = 0;
	printf("Введите число ");
	scanf_s("%i", &N);
	for (i = 1; K < N; i++) {
		K = K + i;
	}
	printf("%i - наименьшее из чисел к, %i - сумма\n", i - 1, K);
	//4
	float P, S = 1000;
	printf("Введите %%");
	scanf_s("%f", &P);
	for (i = 0; S <= 1100; i++) {
		S = S * (1 + (P / 100));
	}
	printf("%i - кол-во месяцев, %f - итоговый размер вклада\n", i, S);
	//5
	printf("Введите 2 числа ");
	scanf_s("%i %i", &A, &B);
	while ((A != 0) & (B != 0)) {
		if (A > B) {
			A = A % B;
		}
		else {
			B = B % A;
		}
	}
	printf("%i - НОД\n", A + B);
	//6
	printf("Введите число Фибоначчи ");
	scanf_s("%i", &N);
	K = 0;
	P = 1;
	S = 0;
	for (i = 1; K != N; i++) {
		S = K + P;
		K = P;
		P = S;
	}
	printf("%i - порядковый номер ", i);
}