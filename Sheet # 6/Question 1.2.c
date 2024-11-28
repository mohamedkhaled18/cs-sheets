#include <stdio.h>
int add(int x , int y) {
	return (x + y);
}
int main() {
	int x, y;
	printf("Enter 1st Number : ");
	scanf("%d",&x);
	printf("Enter 2nd Number : ");
	scanf("%d",&y);
	printf("Sum of %d and %d: %d ",x,y,add(x,y));
}
