/* Program to print two digit odd numbers whose sum of digits are 7 */

#include <stdio.h>

int main (void)
{
   int n=11;
   while(n<100){
	if(n%2!=0){
	   if((n%10) + (n/10) == 7){
		  printf("%d\n",n);
           }
	}
	n++;
   }
   return 0;
}

