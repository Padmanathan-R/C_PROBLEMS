//Program to subtract 5 from a three digit number if the one's and hundred's digit are odd without using "if".

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",num - (5*((num/100)%2 * ((num%100)%10)%2)));
	return 0;
}
