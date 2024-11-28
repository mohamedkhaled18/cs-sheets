#include <stdio.h>

int printTable(int num) {
	for (int i = 1; i <=10; i++)
	{
		printf("\n%d x %d = %d",num,i,(num*i));
	}
}

int main() {
	int x;
	printf("Enter a Number : ");
	scanf("%d", &x);
	printTable(x);
}