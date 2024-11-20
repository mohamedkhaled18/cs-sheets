#include <stdio.h>
int main() {
	float num1, num2, tempvr;
	printf("Enter First Number : ");
	scanf("%f",&num1);
	printf("Enter 2nd Number : ");
	scanf("%f",&num2);

	tempvr = num1;
	num1 = num2;
	printf("First num : %2.f \n2nd num : %2.f", num1, tempvr);

	return 0;
}

