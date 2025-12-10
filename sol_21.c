//Program to subtract 5 from the input number if the number is odd, without using "if".

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",num-(5*(num%2)));
	return 0;
}
