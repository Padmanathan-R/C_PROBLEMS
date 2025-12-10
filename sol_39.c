/* Program to check if the first 2 digits and last 2 digits are the same for a four digit input number */

#include<stdio.h>

int main (void){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d\n",(n%1000)%(100) == n/100);
	return 0;
}

