#include <stdio.h>
#include <stdbool.h>
bool isEven(int num) {
	if (num % 2)
		return 0;
	else
		return 1;
}
int main() {
	int x;
	printf("Enter Number : ");
	scanf("%d",&x);
	if (isEven(x))
	{
		printf("%d is even.",x);
	}
	else
	{
		printf("%d is odd.", x);
	}
}
