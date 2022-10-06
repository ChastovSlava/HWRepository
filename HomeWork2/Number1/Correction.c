#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int age;
	printf("¬ведите возраст\n");
	scanf_s("%d", &age);
	if (age <= 13) {
		printf("%d - детство\n", age);
	} 
	else {
		if (age >= 14 && age < 25) {
			printf("%d - молодость\n", age);
		}
		else {
			if (age >= 25 && age < 60) {
				printf("%d - зрелость\n", age);
			}
			else{
				printf("%d - cтарость\n", age);
			}
		}
	}
	system("pause");
	return 0;
}