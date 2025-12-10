//Program to make the ten's digit of a two digit number as one and print it.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("1%d\n",num%10);
	return 0;
}
