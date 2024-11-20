#include <stdio.h>
#define MAX_OPERATIONS 4
int main() {
    float num1, num2, result, const TAX_RATE = 0.08;
    int choice;
    printf("Calculator Menu:\n");
    printf("[1] Addition\n");
    printf("[2] Subtraction\n");
    printf("[3] Multiplication\n");
    printf("[4] Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice < 1 || choice > MAX_OPERATIONS) {
        printf("choose a number between 1 and 4");
        return 0;
    }
    printf("Enter the First Num : ");
    scanf("%f", &num1);
    printf("Enter the 2nd Num : ");
    scanf("%f", &num2);

    result = (choice == 1) * (num1 + num2) +
        (choice == 2) * (num1 - num2) +
        (choice == 3) * (num1 * num2) +
        (choice == 4) * (num2 != 0) * (num1 / num2);


    result += result * TAX_RATE;
    printf("final result is: %f\n", result);
    return 0;
}
