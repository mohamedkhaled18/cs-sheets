#include <stdio.h>
int sum;
float average;
 void calculateSumAndAverage(int num1, int num2) {
    sum = num1 + num2;
    average = sum / 2;
}

int main() {
    int num1, num2;
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    calculateSumAndAverage(num1, num2);
    printf("The Sum of %d and %d = %d\n", num1, num2, sum);
    printf("The Average of %d and %d = %f\n", num1, num2, average);
    return 0;
}
