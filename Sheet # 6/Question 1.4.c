#include <stdio.h>
float multiply(float x, float y, float z) {
	return x * y * z;
}
int main() {
	float x,y,z;
	printf("Enter First Number : ");
	scanf("%f",&x);
	printf("Enter 2nd Number : ");
	scanf("%f",&y);
	printf("Enter 3rd Number : ");
	scanf("%f",&z);

	printf("Product of %f, %f, and %f of : %f",x,y,z, multiply(x,y,z));
}
