#include <stdio.h>
int main() {
    int year;
	printf("Enter a Year : ");
	scanf("%d",&year);
	((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("This Year is Leap\n") : printf("This Year isnt Leap\n");
    return 0;
}