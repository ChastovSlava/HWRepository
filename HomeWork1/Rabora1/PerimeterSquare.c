#include <math.h>
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "rus");
	float x1=-2, y1=2, x2=3, y2=2, x3=-1, y3=0, ab, bc, ca,perimeter, square, pr2;
	ab = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	bc = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	ca = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	perimeter = ab+ bc+ ca;
	pr2 = perimeter / 2; //Полупериметр 
	printf("Периметр треугольника с координатами x1=-2, y1=2, x2=3, y2=2, x3=-1, y3=0: %f\n ", perimeter);
	square = sqrt(pr2*(pr2-ab)*(pr2-bc)*(pr2-ca));
	printf("Площадь треугольника с координатами x1=-2, y1=2, x2=3, y2=2, x3=-1, y3=0: %f\n ", square);
	system("pause");
	return 0;
}