//Program to print the hundred's digit in a three digit number.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",num/100);
	return 0;
}
