//Program to change the two digit input number's one's place with zero and print it.

#include<stdio.h>

int main (void)
{
	int num;
	printf("Enter a number: ");
        scanf("%d",&num);
	printf("%d0\n",num/10);
	return 0;
}
