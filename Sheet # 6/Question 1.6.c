#include <stdio.h>
int power(int num1,int num2) {
	return pow(num1 ,num2);
}
int main() {
	int x,y;
	printf("Enter First Number : ");
	scanf("%d",&x);
	printf("Enter 2nd Number : ");
	scanf("%d",&y);
	printf("%d ^ %d = %d ",x,y,power(x,y));
}
