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
	switch (op)
	{
	case '+':
		printf("\nResults is  : %f", (a + b)); break;
	case '-':
		printf("\nResults is  : %f", (a - b)); break;
	case '*':
	case 'x':
	case 'X':
		printf("\nResults is  : %f", (a * b)); break;
	case '/':
		printf("\nResults is  : %f", (a / b)); break;
	case '%':
		printf("\nResults is  : %f", ((int)a % (int)b)); break;
	default:
		printf("\n[ERROR] Enter a Valid Operation");
		break;
	}
    return 0;
}