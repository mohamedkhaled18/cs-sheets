#include <stdio.h>
int swap(int x,int y) {
    return printf("After swapping : x = %d, y = %d",y,x);
}

int main() {
    int x,y;
    printf("Enter a x: ");
    scanf("%d", &x);
    printf("Enter a y: ");
    scanf("%d", &y);
    printf("Before swapping : x = %d, y = %d\n", x, y);
    swap(x,y);
    return 0;
}
