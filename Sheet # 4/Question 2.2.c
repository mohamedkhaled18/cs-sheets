#include <stdio.h>
int main() {
    int value;
	printf("Enter Number : ");
	scanf("%d",&value);
	(value % 2) ? printf("An odd integer\n") : printf("An even  integer\n");
    return 0;
}