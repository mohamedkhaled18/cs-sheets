#include <stdio.h>


int main() {

	int sum = 0, Mt = 1;
	do
	{
		sum += Mt;
		Mt++;
	} while (Mt <= 50);
	printf("sum %d\n", sum);
}
