#include <stdio.h>


int main() {
	int num; 
	do
	{
		printf("Enter positive numbers (enter a negative number to stop):  ");
		scanf("%d", &num);
		if (num < 0)
		{
			printf("\nLoop Down ");
			break;
		}
	} while (1);
}
