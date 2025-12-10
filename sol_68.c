/* Program to print the sum of two digit numbers whose one's digit is 5 using while loop */

#include <stdio.h>

int main (void)
{
   int n = 11,sum = 0;
   while(n<100){
	if(n%10 == 5){
	   sum+=n;
        }
	n++;
   }
   printf("%d\n",sum);
   return 0;
}


