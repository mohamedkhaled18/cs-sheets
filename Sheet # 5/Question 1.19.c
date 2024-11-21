#include <stdio.h>
int main() {
	int Nested = 5;
	for (int i = 0; i <= Nested; i++)
	{
		for (int j = 0; j < Nested; j++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}

