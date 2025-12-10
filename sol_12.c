//Program to print the sum of digits of a three digit input number.

#include<stdio.h>

int main (void)
{
	int num,sum = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	sum += (num%100)%10 + (num%100)/10 + num/100;
	printf("Sum = %d\n",sum);
	return 0;
}

