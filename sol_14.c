//Program to print the reverse of three digit number.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
        printf("Reversed number: %d%d%d\n",(num%100)%10,(num%100)/10,num/100);
	return 0;
}
