#include <stdio.h>
//void PlusNoOp(int Num1, int Num2) {
//    int TempValue = 0;
//    while (Num2 !=0) {
//        TempValue = Num1 & Num2;
//        Num1 = Num1 ^ Num2;
//        Num2 = TempValue << 1;
//    }
//    printf("Num1 => %d", Num1);
//}
//int main() {
//    int Array1[] = { 1, 2, 3, 4 };
//    int Size = sizeof(Array1) / sizeof(Array1[0]);
//    int Array2[] = { 4 };
//    int div = 1;
//    printf("Original Array: ");
//    for (int i = 0; i < Size; i++) {
//        printf("%d ", Array1[i]);
//        div *= Array1[i];
//    }
//    printf("\n");
//    printf("2nd Array: ");
//    for (int i = 0; i < Size; i++) {
//        Array2[i] = (Array1[i] / div);
//        printf("%d ", Array2[i]);
//    }
//    printf("\n");
//
//    return 0;
//}

#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        remainder = num % 10;
        //printf("[1] remainder => %d\n", remainder);
        reversed = reversed * 10 + remainder;
        //printf("[2] reversed => %d\n", reversed);
        num /= 10;
        //printf("[1] num => %d\n", num);
        //printf("////////////////////////////////////////////////////////////////////////////\n");
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    }
    else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
