#include <stdio.h>

int main() {

	float num1, num2, num3, num4, num5, average;

	printf("Enter five number:\n");

	printf("Number 1: ");

	scanf("%f", &num1);

	printf("Number 2: ");

	scanf("%f", &num2);

	printf("Number 3: ");

	scanf("%f", &num3);

	printf("Number 4:");

	scanf("%f", &num4);

	printf("Number 5:");

	scanf("%f", &num5);

	average = (num1+ num2+ num3+ num4+ num5) / 5.0;

	printf("The average of the five number is: %.2f\n", average);

	return 0;

}
