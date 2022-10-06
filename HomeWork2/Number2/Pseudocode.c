#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int x, y, z;
	printf("Введите x, y, z\n");
	scanf_s("%d %d %d", &x, &y, &z);
	if ((x!=y) & (x!=z) & (z!=y)) {
		if ((x>y) && (x>z)) {
			z = x + z;
		}
		else {
			if ((y>x) && (y>z)) {
				z = z + y;
			}
			else {
				z = z*z;
			}
		}

		printf("z= %d\n", z);
	}
	else {
		if ((x==y) && (x==z) && (z==y)) {
			printf("Все переменные равны\n");
		}
		else {
			if (x==y) {
				printf("x = y\n");
			}
			else {
				if (x==z) {
					printf("x = z\n");
				}
				else {
					if (y == z) {
						printf("y = z\n");
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}