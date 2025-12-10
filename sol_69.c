/* Program to print the sum of two digit odd  numbers whose ten's digit is 7 */

#include <stdio.h>

int main (void)
{
   int n = 11,sum = 0;
   while(n<100){
	if(n%2!=0){
	   if(n/10 == 7){
		sum+=n;
	   }
	 }
	 n++;
   }
   printf("%d\n",sum);
   return 0;
}

