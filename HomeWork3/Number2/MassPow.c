#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int e, result = 0, mass[100000];
	printf("������� ���-�� ��-�� (�� 100000): \n");
	scanf_s("%d", &e);
	printf("������� ��-�� �������: \n");
	for (int i = 0; i < e; i++) {
		scanf_s("%d", &mass[i]);
	}
	for (int i = 0; i < e; i++) {
		result = result + pow(mass[i], 2);
	}
	printf("����� ��������� ��-�� �����: %d.\n", result);
	system("pause");
	return 0;
}