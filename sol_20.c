//Program to make the ten's digit of a three digit number as zero and print it.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d0%d\n",num/100,(num%100)%10);
	return 0;
}
