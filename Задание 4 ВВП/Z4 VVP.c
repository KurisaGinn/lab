#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	//1
	float a, b, S, P;
	printf("Введите стороны прямоугольника : ");
	scanf_s("%f %f", &a, &b);
	if (a > 0){
		if (b > 0) {
			S = a * b;
			P = 2 * (a + b);
			printf("Площадь = %f\nПериметр = %f\n", S, P);
		}
	}
	//2
	float d, L, pi = 3.14;
	printf("Введите диаметр окружности: ");
	scanf_s("%f", &d);
	if (d > 0) {
		L = pi * d;
		printf("Длина окружности = %f\n", L);
	}
	//3
	float A, B, Sred;
	printf("Введите два числа : ");
	scanf_s("%f %f", &A, &B);
	Sred = (A + B) / 2;
	printf("Среднее арифмитическое = %f\n", Sred);
	//4
	float k, m, sum, raz, pr, ch;
	printf("Введите два числа : ");
	scanf_s("%f %f", &k, &m);
	k = pow(k, 2);
	m = pow(m, 2);
	sum = k + m;
	raz = k - m;
	pr = k * m;
	ch = k / m;
	printf("Сумма квадратов = %f\nРазность квадратов = %f\nПроизведение квадратов = %f\nЧастное квадратов = %f\n", sum, raz, pr, ch);
	//5
	float t, f, s, r, p, c;
	printf("Введите два числа : ");
	scanf_s("%f %f", &t, &f);
	t = abs(t);
	f = abs(f);
	s = t + f;
	r = t - f;
	p = t * f;
	c = t / f;
	printf("Сумма модулей = %f\nРазность модулей = %f\nПроизведение модулей = %f\nЧастное модулей = %f", s, r, p, c);
	return 0;
}