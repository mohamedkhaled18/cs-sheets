#include <stdio.h>
int printPattern() {
	for (int i = 0; i <5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	/*int x = 0,y = 0,z = 0;
	printf("Enter First Number : ");
	scanf("%d",&x);
	printf("Enter 2nd Number : ");
	scanf("%d",&y);
	printf("Sum of squares of %d and %d: %d", x, y, sumOfSquares(x,y));*/
	printPattern();
}
