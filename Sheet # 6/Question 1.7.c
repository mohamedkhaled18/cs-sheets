#include <stdio.h>
float average(float num1, float num2, float num3) {
	float sum = (num1 + num2 + num3);
	return (sum / 3);
}
int main() {
	float x = 0,y = 0,z = 0;
	printf("Enter First Number : ");
	scanf("%f",&x);
	printf("Enter 2nd Number : ");
	scanf("%f",&y);
	printf("Enter 3rd Number : ");
	scanf("%f",&z);
	printf("The average of %.2f, %.2f, and %.2f is %.2f\n", x, y, z, average(x,y,z));
}
