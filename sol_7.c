//Program to print the ten's digit for a two digit number.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",num/10);
	return 0;
}
