//Program to print the reverse of a two digit number.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
        printf("Reversed number: %d%d\n",num%10,num/10);
	return 0;
}
