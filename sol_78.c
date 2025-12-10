/* Program to get a four digit input and check whether the middle digits are prime or not */

#include <stdio.h>

int main (void)
{
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   
   int middle_digits = (n%1000)/10,start = 2,prime = 1;
   while(start < middle_digits){
	   if(middle_digits % start == 0){
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



