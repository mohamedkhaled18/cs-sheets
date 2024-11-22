#include <stdio.h>
int main() {
	int grade;
	printf("Enter Ur Grade : ");
	scanf("%d",&grade);
    if (grade < 1 || grade > 100)
    {
        printf("Enter a valid grade \n");
        return 0;
    }
    switch (grade /10) {
     case 10:
     case 9:
     case 8:
        printf("Excellent\n");
        break;
    case 7:
        printf("Very Good\n");
        break;
    case 6:
        printf("Good\n");
        break;
    case 5:
        printf("Pass\n");
        break;
    default:
        printf("Fail\n");
        break;
    }
    return 0;
}

