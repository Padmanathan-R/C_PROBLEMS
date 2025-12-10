//Program to print the one's digit for a three digit number.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a numebr: ");
	scanf("%d",&num);
	printf("%d\n",(num%100)%10);
	return 0;
}
