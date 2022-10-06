#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	float side_A, side_B, side_C, A, B, C;
	printf("Введите стороны треугольника:\n");
	scanf_s("%d %d %d", &side_A, &side_B, &side_C);
	A = pow(side_A, 2);
	B = pow(side_B, 2);
	C = pow(side_C, 2);
	if ((side_A + side_B)> side_C || (side_A + side_C) > side_B || (side_C + side_B) > side_A) {
		if ((side_A == side_B) && (side_A == side_C) && (side_C == side_B)) {
			printf("Треугольник равносторонний\n");
		}
		else{
			if ((side_A == side_B) || (side_A == side_C) || (side_C == side_B)) {
				printf("Треугольник равнобедренный\n");
			}
			else {
				if ((A == B + C) || (B == A + C) || (C == B + A)) {
					printf("Треугольник прямоугольный\n");
				}
				else {
					printf("Треугольник произвольный\n");
				}
			}
		}
	}
	else {
		printf("Не является треугольником\n");
	}
	system("pause");
	return 0;
}