/* Program to print the two digit even number whose sum of digits are 6 using while loop */

#include <stdio.h>

int main (void)
{
   int n = 11;
   while(n<100){
	if(n%2==0){
	    if((n%10) + (n/10) == 6){
		  printf("%d\n",n);
	    }
	 }
	n++;
   }
   return 0;
}
