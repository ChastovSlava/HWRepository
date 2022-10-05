#include <math.h>
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	printf("¬ведите число:\n");
	scanf_s("%d", &a);
	printf("1: %d\n", a);
	printf("2: %d\n", a+1);
	printf("2: %d\n", a+2);
	system("pause");
	return 0;
}