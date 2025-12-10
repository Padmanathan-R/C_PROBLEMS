//Program to print the sum of two digit input number.

#include<stdio.h>

int main (void)
{
	int num,sum = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
        sum += num%10 + num/10;
	printf("Sum = %d\n",sum);
	return 0;
}


	   
