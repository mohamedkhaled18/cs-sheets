#include <stdio.h>
int main() {
	int num1, num2;
	printf("Enter First Number : ");
	scanf("%d",&num1);
	printf("Enter 2nd Number : ");
	scanf("%d",&num2);

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("First num : %d \n2nd num : %d", num1, num2);

	return 0;
}

