//Program to print the reverse of the first two digits in a four digit number.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d%d%d%d\n",(num%1000)/100,num/1000,(num%1000)%100/10,(num%1000)%100%10);
	return 0;
}
