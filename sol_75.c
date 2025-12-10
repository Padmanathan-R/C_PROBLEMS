/* Porgram to check whether the input number is prime or not */

#include <stdio.h>

int main (void)
{
   int n,start = 2,prime = 1;
   printf("Enter a number : ");
   scanf("%d",&n);
   while(start<n){
	if(n%start == 0){
	     prime = 0;
	     break;
	}
	else{
	   start++;
	}
    }
   if(prime){
	printf("The number is prime\n");
   }
   else{
        printf("The number is not prime\n");
   }
   return 0;
}
	 

   
