#include <math.h>
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	printf("¬ведите сторону куба: ");
	scanf_s("%d", &a);
	printf("ќъЄм куба: %d\n", a*a*a);
	printf("ѕлощадь поверхности куба: %d\n", 6*a*a);
	printf("ѕлощадь боковой поверхности: %d\n", a*a);
	system("pause");
	return 0;

}