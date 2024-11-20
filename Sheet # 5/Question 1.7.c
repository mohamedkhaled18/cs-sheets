#include <stdio.h>


int main() {
	int num; 
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("\Multiplication Table for %d", num);
	for (int i = 0; i <= 10; i++)
	{
		printf("\n%d X %d = %d" , num, i,(num*i));
	}
}
