/* Program to check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different for a three digit input */

#include<stdio.h>

int main (void){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d\n",(n%100)%10 == (n%100)/10);
	return 0;
}

