#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<windows.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a = 0, number, stop1 = 0, stop2 = 0;
	float side1, side2, result, rad;
	printf("����� ����������!");
	Sleep(500);
	system("cls");
	while (a < 2) {
		printf("��������.");
		Sleep(500);
		system("cls");
		printf("��������..");
		Sleep(500);
		system("cls");
		printf("��������...");
		Sleep(500);
		system("cls");
		a++;
	}
	while (stop1 != 1) {
		printf("����� ������:\n");
		printf("1. �������������.\n");
		printf("2. �����������.\n");
		printf("3. ����.\n");
		printf("0. ����� �� ����������.\n");
		printf("����: ");
		scanf_s("%d", &number);
		system("cls");
		if (number == 1) {
			printf("������� 2 ������� ��������������: ");
			scanf_s("%f %f", &side1, &side2);
			system("cls");
			stop2 = 0;
			while (stop2 != 1) {
				printf("����:\n");
				printf("1. ����� ������� ��������������.\n");
				printf("2. ����� �������� ��������������.\n");
				printf("3. ����� ��������� ��������������.\n");
				printf("4. ��������� � ������ ������.\n");
				printf("0. �����.\n");
				printf("����: ");
				scanf_s("%d", &number);
				if (number == 4) {
					stop2++;
					system("cls");
				}
				else {
					if (number == 1) {
						result = side1 * side2;
						printf("%.2f\n", result);
						system("pause");
						system("cls");
					}
					else {
						if (number == 2) {
							result = side1 + side2 + side1 + side2;
							printf("%.2f\n", result);
							system("pause");
							system("cls");
						}
						else {
							if (number == 3) {
								result = sqrt(side1 * side1 + side2 * side2);
								printf("%.2f\n", result);
								system("pause");
								system("cls");
							}
							else {
								system("cls");
								stop2++;
								stop1++;
							}
						}
					}
				}
			}
		}
		else {
			if (number == 2) {
				printf("������� ��� ������� �������������� ������������: ");
				scanf_s("%f %f", &side1, &side2);
				system("cls");
				stop2 = 0;
				while (stop2 != 1) {
					printf("����:\n");
					printf("1. ����� ������� ������������.\n");
					printf("2. ����� �������� ������������.\n");
					printf("3. ����� ���������� ������������.\n");
					printf("4. ��������� � ������ ������.\n");
					printf("0. �����.\n");
					printf("����: ");
					scanf_s("%d", &number);
					if (number == 4) {
						stop2++;
						system("cls");
					}
					else {
						if (number == 1) {
							result = side1 * side2 * 0.5;
							printf("%.2f\n", result);
							system("pause");
							system("cls");
						}
						else {
							if (number == 2) {
								result = side1 + side2 + sqrt(side1 * side1 + side2 * side2);
								printf("%.2f\n", result);
								system("pause");
								system("cls");
							}
							else {
								if (number == 3) {
									result = sqrt(side1 * side1 + side2 * side2);
									printf("%.2f\n", result);
									system("pause");
									system("cls");
								}
								else {
									system("cls");
									stop2++;
									stop1++;
								}
							}
						}
					}
				}
			}
			else {
				if (number == 3) {			
					printf("������� ������ �����: ");
					scanf_s("%f", &rad);
					system("cls");
					stop2 = 0;
					while (stop2 != 1) {
						printf("����:\n");
						printf("1. ����� ������� �����.\n");
						printf("2. ����� ����� ���������� �����.\n");
						printf("3. ����� ������� �����.\n");
						printf("4. ��������� � ������ ������.\n");
						printf("0. �����.\n");
						printf("����: ");
						scanf_s("%d", &number);
						if (number == 4) {
							stop2++;
							system("cls");
						}
						else {
							if (number == 1) {
								result = 3.14 * rad * rad;
								printf("%.2f\n", result);
								system("pause");
								system("cls");
							}
							else {
								if (number == 2) {
									result = 2 * 3.14 * rad;
									printf("%.2f\n", result);
									system("pause");
									system("cls");
								}
								else {
									if (number == 3) {
										result = 2 * rad;
										printf("%.2f\n", result);
										system("pause");
										system("cls");
									}
									else {
										system("cls");
										stop2++;
										stop1++;
									}
								}
							}
						}
					}
				}
				else {
					if (number == 0) {
						break;
					}
					else {
						system("cls");
						printf("������� �������� ��������!\n");
						system("pause");
						system("cls");
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}