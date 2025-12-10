/* Program to check whether the last two digits of the input number is prime or not */

#include <stdio.h>

int main (void)
{
   int n,last_digits = 0,start = 2,prime = 1;
   printf("Enter a number : ");
   scanf("%d",&n);
   
   int temp = n;
   last_digits+= temp%10;
   temp/=10;
   last_digits+=10 * ( temp%10);
   while(start<last_digits){
	   if(n%start ==0){
		  prime = 0;
		  break;
	   }
	   else{
		  start++;
	   }
   }
   if(prime){
	printf("Prime\n");
   }
   else{
        printf("Not prime\n");
   }
   return 0;
}




