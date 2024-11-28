#include <stdio.h>
float calculateArea(float x) {
	return ((x * x) * 3.14159);
}
int main() {
	float x;
	printf("Enter the Area : ");
	scanf("%f",&x);
	printf("Area of the circle with radius %f is: %f",x, calculateArea(x));
}
