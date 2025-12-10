//Program to subtract 5 from the input number if the ten's digit is odd without using "if".

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",num-(5*((num/10)%2)));
	return 0;
}
