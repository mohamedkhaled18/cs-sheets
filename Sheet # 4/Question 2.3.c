#include <stdio.h>
int main() {
    int year;
	printf("Enter a Year : ");
	scanf("%d",&year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("\nThis Year is Leap");
	else printf("\nThis Year isnt Leap");
    return 0;
}