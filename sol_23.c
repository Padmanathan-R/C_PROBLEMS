//Program to subtract 5 from a two digit input if the sum of the digits is odd without using "if".

#include<stdio.h>

int main (void)
{
	int num,sum = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	sum = (num%10) + (num/10);
	printf("%d\n",num - (5*(sum%2)));
	return 0;
}
	
