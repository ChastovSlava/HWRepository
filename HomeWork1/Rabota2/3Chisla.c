#include <math.h>
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	printf("¬ведите число:\n");
	scanf_s("%d", &a);
	printf("%d", a);
	system("pause");
	return 0;
}