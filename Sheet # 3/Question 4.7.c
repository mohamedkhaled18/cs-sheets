#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("\nEnter 2nd number: ");
    scanf("%d", &b);
    printf("\nEnter 3rd number: ");
    scanf("%d", &c);
    int Heigh = a * (a >= b) + b * (b > a);
    int Heigh2h = Heigh * (Heigh >= c) + c * (c > Heigh);
    printf("\nThe maximum number is: %d\n", Heigh2h);
    return 0;
}


