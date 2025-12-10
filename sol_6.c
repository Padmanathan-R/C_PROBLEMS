//Program to print the one's digit from a two digit number input.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",num%10);
	return 0;
}
