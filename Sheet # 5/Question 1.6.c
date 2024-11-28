#include <stdio.h>
int main() {
	int num = 0 ,i = 0 , sum = 0;
	do
	{
		printf("Enter positive numbers (enter a negative number to stop):  ");
		scanf("%d", &num);
		if (num < 0)
		{
			break;
		}
		else {
			sum += num;
			i++;
		}
	} while (1);
	printf("The average of the positive numbers is: %f\n", ((float)sum / (float)i));
}
