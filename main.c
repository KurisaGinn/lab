#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	printf("������� ������ �����:");
	scanf_s("%d", &a);
	printf("������� ������ �����:");
	scanf_s("%d", &b);
	c = ++a * b > 0 ? 1 : -1;
	printf("���������: %d\n", c);

	int A;
	float B, C;
	printf("������� ������ ����� �����:");
	scanf_s("%d", &A);
	printf("������� ������ �����:");
	scanf_s("%f", &B);
	C = (float)A / 2 * B;
	printf("���������: %f", C);
	return 0;
}