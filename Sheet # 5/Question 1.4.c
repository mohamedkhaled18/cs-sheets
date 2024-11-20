#include <stdio.h>


int main() {
	int num = 0, factorial = 1;
	printf("Enter The num = ");
	scanf("%d",&num);
	for (int i = 1; i <= num; i++)
	{
		factorial *= i;
	}
	printf("factorial => %d", factorial);
}
