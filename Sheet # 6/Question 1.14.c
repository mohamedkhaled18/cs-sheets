#include <stdio.h>

int printPatternWithSize(int size,int by) {
	for (int i = 0; i < size; i++)
	{
		for (int i = 0; i < by; i++)
		{
			printf("*");

		}
		printf("\n");
	}
}

int main() {
	int x,y;
	printf("Enter the  Size of the Pattern : ");
	scanf("%d", &x);
	printf("Enter the by of the Pattern : ");
	scanf("%d", &y);
	printPatternWithSize(x,y);
}