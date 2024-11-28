#include <stdio.h>
int sumOfSquares(int num1, int num2) {
	return (num1 * num1) + (num2 * num2);
}
int main() {
	int x = 0,y = 0,z = 0;
	printf("Enter First Number : ");
	scanf("%d",&x);
	printf("Enter 2nd Number : ");
	scanf("%d",&y);
	printf("Sum of squares of %d and %d: %d", x, y, sumOfSquares(x,y));
}
