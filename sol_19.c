//Program to make the one's digit of a three digit number as two and print it.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d%d2\n",num/100,(num%100)/10);
	return 0;
}
