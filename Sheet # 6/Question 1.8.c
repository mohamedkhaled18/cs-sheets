#include <stdio.h>
int max(int num1, int num2) {
	int max = num1 * (num1 > num2) + num2 * (num2 > num1);
	return (max);
}
int main() {
	int x = 0,y = 0,z = 0;
	printf("Enter First Number : ");
	scanf("%d",&x);
	printf("Enter 2nd Number : ");
	scanf("%d",&y);
	printf("Maximum of %d and %d: %d", x, y, max(x,y));
}
