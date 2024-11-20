#include <stdio.h>
int main() {
	float Celsius;
	printf("Enter The  Celsius : ");
	scanf("%f",&Celsius);
	printf("The Fahrenheit : %f ", (Celsius * (9 / 5)) + 32);
	return 0;
}

