#include <stdio.h>


int main() {
	int num,sum =0;
	while (1) {
		printf("Enter a number (enter 0 to stop): ");
		scanf("%d", &num);
		if (num == 0)
		{
			printf("Sum is : %d",sum);
			break;
		}
		sum += num;
	}

}
