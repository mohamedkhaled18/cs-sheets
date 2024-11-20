#include <stdio.h>
int main() {
    float a,b,c;
	printf("Enter a First Number : ");
	scanf("%f",&a);
	printf("\nEnter a 2nd Number : ");
	scanf("%f", &b);
	printf("\nEnter a 3rd Number : ");
	scanf("%f", &c);
	if (a > b && a > c)
		printf("\nthe largest number is First Number : %2.f",a);
	else if (b > a && b > c)
		printf("\nthe largest number is 2nd Number : %2.f", b);
	else if (c > a && c > b)
		printf("\nthe largest number is 3rd Number : %2.f", c);
    return 0;
}