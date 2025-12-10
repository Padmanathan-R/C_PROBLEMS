/* Program to check if the digit 1 is greater than or equal to the digit 0*/

#include<stdio.h>

int main (void){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d\n",n/10 >= n%10);
	return 0;
}

