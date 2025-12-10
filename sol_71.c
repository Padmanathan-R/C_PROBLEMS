/* Program to print the sum of digits in the input number using while loop */

#include <stdio.h>

int main (void)
{
   int n,sum = 0;
   printf("Enter a number : ");
   scanf("%d",&n);
   while(n!=0){
	sum+=n%10;
	n/=10;
   }
   printf("%d\n",sum);
   return 0;
}
