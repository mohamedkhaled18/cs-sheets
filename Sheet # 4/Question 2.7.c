#include <stdio.h>
int main() {
    float a,b;
	char op;
	printf("Enter a Operation : ");
	scanf("%c",&op);
	printf("\nEnter a First Number : ");
	scanf("%f", &a);
	printf("\nEnter a 2nd Number : ");
	scanf("%f", &b);
	if (op == '+')
		printf("\nResults is  : %f",(a+b));
	else if (op == '-')
		printf("\nResults is  : %f", (a - b));
	else if (op == '*' || op == 'x' || op == 'X')
		printf("\nResults is  : %f", (a * b));
	else if (op == '/')
		printf("\nResults is  : %f", (a / b));
	else if (op == '%')
		printf("\nResults is  : %f", ((int)a % (int)b));
	else
	{
		printf("\n[ERROR] Enter a Valid Operation");
	}
    return 0;
}