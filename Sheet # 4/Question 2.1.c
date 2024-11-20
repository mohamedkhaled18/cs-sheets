#include <stdio.h>
int main() {
    int value;
	printf("Enter Number : ");
	scanf("%d",&value);
	if (value % 2)
		printf("An odd integer\n");
	else
		printf("An even integer\n");
    return 0;
}


