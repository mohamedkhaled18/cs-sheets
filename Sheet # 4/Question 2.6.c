#include <stdio.h>
int main() {
    float a, b, c, max;
    printf("Enter the First Number: ");
    scanf("%f", &a);
    printf("Enter the Second Number: ");
    scanf("%f", &b);
    printf("Enter the Third Number: ");
    scanf("%f", &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("\nThe largest number is: %2.f\n", max);
    return 0;
}
