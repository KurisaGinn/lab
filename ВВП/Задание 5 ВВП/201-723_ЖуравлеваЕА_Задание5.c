#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	//1
	float x1, y1, x2, y2, R;
	printf("Введите координаты двух точек: ");
	scanf_s("%f %f %f %f", &x1, &y1, &x2, &y2);
	R = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	printf_s("Расстояние между ними = %f\n", R);
	//2
	float A, B, C, AC, BC;
	printf("Введите числовое расположение трёх точек на оси: ");
	scanf_s("%f %f %f", &A, &B, &C);
	if (A > C) {
		AC = A - C;
	}
	else {
		AC = C - A;
	}
	if (B > C) {
		BC = B - C;
	}
	else {
		BC = C - B;
	}
	printf("Длина отрезка АС = %f\nДлина отрезка ВС = %f\nСумма этих отрезков = %f\n", AC, BC, (AC + BC));
	//3
	float a, b, c, ac, bc, p;
	printf("Введите числовое расположение трёх точек на оси: ");
	scanf_s("%f %f %f", &a, &b, &c);
	if (b > a) {
		ac = c - a;
		bc = b - c;
	}
	else {
		ac = a - c;
		bc = c - b;
	}
	printf("Произведение ас и bc = %f\n", (ac * bc));
	//4
	printf("Введите координаты противоположных вершин прямоугольника: ");
	scanf_s("%f %f %f %f", &x1, &y1, &x2, &y2);
	if (x1 < x2) {
		a = x2 - x1;
	}
	else {
		a = x1 - x2;
	}
	if (y1 < y2) {
		b = y2 - y1;
	}
	else {
		b = y1 - y2;
	}
	printf("Периметр прямоугольника = %f\nПлощадь = %f\n", ((a + b) * 2), (a * b));
	//5
	float x3, y3, P, S;
	printf("Введите координаты вершин треугольника: ");
	scanf_s("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
	a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	P = a + b + c;
	p = P / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("Периметр треугольника = %f\nПлощадь = %f", P, S);
	return 0;
}