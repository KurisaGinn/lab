#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	int N, S;
	printf("Введите кол-во секунд ");
	scanf_s("%i", &N);
	S = N - (N / 60) * 60;
	printf("%i - кол-во секунд с прошедших последней минуты\n", S);
	//2
	printf("Введите день ");
	scanf_s("%i", &N);
	if (N < 7) {
		printf("%i - номер дня недели\n", N);
	}
	else {
		S = N - (N / 7) * 7;
		if (S == 7) {
			printf("0 - номер дня недели\n");
		}
		else {
			printf("%i - номер дня недели\n", S);
		}
	}
	//3
	int K, a, i;
	printf("Введите день и номер дня недели 1-го января ");
	scanf_s("%i %i", &K, &N);
	for (i = 1; i < K; i++) {
		N += 1;
		if (N > 7) {
			N = 1;
		}
	}
	printf("%i - номер дня недели\n", N);
	//4
	int A, B, C, Sk;
	printf("Введите A, B, C ");
	scanf_s("%i %i %i", &A, &B, &C);
	S = A * B;
	Sk = C * C;
	A = S / Sk;
	B = S - A * Sk;
	printf("%i - кол-во квадратов %i - оставшаяся площадь\n", A, B);
	//5
	printf("Введите номер года ");
	scanf_s("%i", &N);
	if ((N % 100) != 0) {
		N = (N / 100) + 1;
	}
	else {
		N = N / 100;
	}
	printf("%i - столетие", N);
}