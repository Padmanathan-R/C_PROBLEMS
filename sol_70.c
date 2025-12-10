/* Program to print the number of digits in the input number using while loop */

#include <stdio.h>

int main (void)
{
   int n,count = 0;
   printf("Enter a nmuber : ");
   scanf("%d",&n);
   while(n!=0){
	count++;
	n/=10;
   }
   printf("%d\n",count);
   return 0;
}

