#include <math.h>
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "rus");
	float a, b, sum, diff, pro, priv, Average_pow, Average_abs;
	printf("¬ведите 2 числа: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	sum = a + b;
	diff = a - b;
	pro = a * b;
	priv = a / b;
	Average_pow = (pow(a, 2) + pow(b, 2)) / 2;
	Average_abs = (abs(a) + abs(b)) / 2;
	printf("%.2f %.2f %.2f %.2f %.2f %.2f\n", sum, diff, pro, priv, Average_pow, Average_abs);
	system("pause");
	return 0;

}