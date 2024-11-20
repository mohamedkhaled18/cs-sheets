#include <stdio.h>


int main() {
	int num; 
	while (1) {
		printf("Enter a number (enter 0 to stop): ");
		scanf("%d",&num);
		if (num == 0)
		{
			printf("\nLoop Down ");
			break;
		}
	}
	
}
