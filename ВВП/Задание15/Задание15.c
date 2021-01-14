#include <stdio.h>
#include <locale.h>
float PowerA3(float A) {
	float B;
	B = A * A * A;
	return B;
}
int Sign(float X) {
	if (X < 0) {
		X = -1;
	}
	else if (X == 0) {
		X = 0;
	}
	else {
		X = 1;
	}
	return X;
}
float RingS(float R1, float R2) {
	float S;
	S = 3.14 * R1 * R1 - 3.14 * R2 * R2;
	return S;
}
int Quarter(float x, float y) {
	if ((x > 0) & (y > 0)) {
		return 1;
	}
	else if ((x > 0) & (y < 0)) {
		return 4;
	}
	else if ((x < 0) & (y < 0)) {
		return 3;
	}
	else {
		return 2;
	}
}
float Fact2(int N) {
	int k, p = 1;
	if ((N % 2) == 0) {
		k = 2;
	}
	else {
		k = 1;
	}
	while (k <= N) {
		p = p * k;
		k += 2;
	}
	return p;
}
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	float A, B, C, D, F;
	printf("Введите 5 чисел ");
	scanf_s("%f %f %f %f %f", &A, &B, &C, &D, &F);
	printf("%f ", PowerA3(A));
	printf("%f ", PowerA3(B));
	printf("%f ", PowerA3(C));
	printf("%f ", PowerA3(D));
	printf("%f - результат", PowerA3(F));
	printf("\n");
	//2
	printf("Введите 2 числа ");
	scanf_s("%f %f", &A, &B);
	printf("%i -значение выражения", (Sign(A) + Sign(B)));
	printf("\n");
	//3
	float G;
	printf("Введите радиусы ");
	scanf_s("%f %f %f %f %f %f", &A, &B, &C, &D, &F, &G);
	printf("%f - площадь кольца\n", RingS(A, B));
	printf("%f - площадь кольца\n", RingS(C, D));
	printf("%f - площадь кольца", RingS(F, G));
	printf("\n");
	//4
	printf("Введите координаты 3-х точек ");
	scanf_s("%f %f %f %f %f %f", &A, &B, &C, &D, &F, &G);
	printf("%i - четверть\n", Quarter(A, B));
	printf("%i - четверть\n", Quarter(C, D));
	printf("%i - четверть", Quarter(F, G));
	printf("\n");
	//5
	int N;
	printf("Введите число ");
	scanf_s("%i", &N);
	printf("%f - результат", Fact2(N));
}