#include <stdio.h>

int isPrime(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not prime.\n", num);
        return 0;
    }
    if (isPrime(num)) {
        printf("%d is prime.", num);
    }
    else {
        printf("%d is not prime.", num);
    }
    return 0;
}