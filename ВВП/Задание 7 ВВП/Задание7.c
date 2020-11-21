#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	float a, pi = 3.14; 
	printf("Введите размер угла в градусах ");
	scanf_s("%f", &a);
	a = a * (pi / 180);
	printf("Угол в радианах = %f\n", a);
	//2
	printf("Введите размер угла в радианах ");
	scanf_s("%f", &a);
	a = a * (180 / pi);
	printf("Угол в градусах = %f\n", a);
	//3
	float X, Y, A;
	printf("Введите X, A, Y ");
	scanf_s("%f %f %f", &X, &A, &Y);
	A = A / X;
	X = A + (A * Y);
	printf("Стоило %f\n", X);
	//4
	float V1, V2, S, T;
	printf("Введите V1, V2, S, T ");
	scanf_s("%f %f %f %f", &V1, &V2, &S, &T);
	V1 = V1 * T;
	V2 = V2 * T;
	S = S + V1 + V2;
	printf("Расстояние = %f\n", S);
	//5
	float B, x;
	printf("Введите A, B ");
	scanf_s("%f %f", &A, &B);
	x = -B / A;
	printf("x = %f\n", x);
	//6
	float A1, B1, C1, A2, B2, C2, y;
	printf("Введите A1, B1, C1, A2, B2, C2 ");
	scanf_s("%f %f %f %f %f %f", &A1, &B1, &C1, &A2, &B2, &C2);
	y = (A1 * C2 - A2 * C1) / (B2 * A1 - A2 * B1);
	x = (C1 - B1 * y) / A1;
	printf("x = %f, y = %f\n", x, y);
}