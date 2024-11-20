#include <stdio.h>
//This code swaps the values of a and b without using a temporary variable.
int main()
{
	unsigned short int a, b;
	printf("Please enter 2 integer values:\n");
	printf("a = "); scanf("%hu", &a);
	printf("b = "); scanf("%hu", &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	// Display updated values
	printf("Updated values:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}
