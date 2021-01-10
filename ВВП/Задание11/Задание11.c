#include <stdio.h>
#include <locale.h>
#include <math.h>
void main() {
	setlocale(LC_ALL, "Rus");
	//1
	int A, B;
	printf("Введите 2 числа ");
	scanf_s("%i %i", &A, &B);
	if (A != B) {
		if (A > B) {
			B = A;
		}
		else {
			A = B;
		}
	}
	else {
		A = 0;
		B = 0;
	}
	printf("%i %i - новые значения\n", A, B);
	//2
	int C, l = 0;
	printf("Введите 3 числа ");
	scanf_s("%i %i %i", &A, &B, &C);
	if ((A > C) & (B > C)) {
		l = A + B;
	}
	else if ((A > B) & (C > B)) {
		l = A + C;
	}
	else if ((B > A) & (C > A)) {
		l = B + C;
	}
	printf("%i - сумма\n", l);
	//3
	printf("Введите 3 числа ");
	scanf_s("%i %i %i", &A, &B, &C);
	if ((sqrt((B - A) * (B - A))) > (sqrt((C - A) * (C - A)))) {
		l = sqrt((C - A) * (C - A));
		printf("C  %i\n", l);
	}
	else {
		l = sqrt((B - A) * (B - A));
		printf("B  %i\n", l);
	}
	//4
	int x, y;
	printf("Введите координаты точки ");
	scanf_s("%i %i", &x, &y);
	if (x > 0) {
		if (y > 0) {
			printf("1 четверть \n");
		}
		if (y < 0) {
			printf("4 четверть \n");
		}
	}
	else {
		if (y > 0) {
			printf("2 четверть \n");
		}
		if (y < 0) {
			printf("3 четверть \n");
		}
	}
	//5
	printf("Введите число ");
	scanf_s("%i", &A);
	if (A > 0) {
		if ((A % 2) == 0) {
			printf("Положительное чётное число\n");
		}
		else {
			printf("Положительное нечётное число\n");
		}
	}
	else if (A < 0) {
		if ((A % 2) == 0) {
			printf("Отрицательное чётное число\n");
		}
		else {
			printf("Отрицательное нечётное число\n");
		}
	}
	else {
		printf("Нулевое число\n");
	}
	//6
	printf("Введите число ");
	scanf_s("%i", &A);
	if ((A % 2) == 0) {
		if ((A / 10) == 0) {
			printf("Чётное однозначное число\n");
		}
		else if ((A / 100) == 0) {
			printf("Чётное двузначное число\n");
		}
		else {
			printf("Чётное трёхзначное число\n");
		}
	}
	else {
		if ((A / 10) == 0) {
			printf("Нечётное однозначное число\n");
		}
		else if ((A / 100) == 0) {
			printf("Нечётное двузначное число\n");
		}
		else {
			printf("Нечётное трёхзначное число\n");
		}
	}
}