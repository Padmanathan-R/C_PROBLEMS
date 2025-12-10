/* Program to print the two digit odd numbers below 20 */

#include <stdio.h>

int main (void)
{
   int n = 10;
   while(n<21){
	 if(n%2!=0){
	     printf("%d\n",n);
	 }
	 n++;
   }
   return 0;
}

