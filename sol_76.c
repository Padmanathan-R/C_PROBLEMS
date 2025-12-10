/* Program to check whether the number is prime and if the sum of digits is equal to 14 */

#include <stdio.h>

int main (void)
{
   int n,start = 2,prime = 1,sum = 0;
   printf("Enter a number: ");
   scanf("%d",&n);
   while(start < n){
	if(n%start == 0){
	    prime = 0;
	    break;
	}
	else{
	    start++;
	}
   } 
   if(prime){
        printf("The number is prime ");
   }
   else{
        printf("The number is not prime ");
   }
   while(n!=0){
        sum+=n%10;
	 n/=10;
   }
   if(sum == 14){
        printf("and the sum of digits is 14\n");
   }
   else{
        printf("and the sum of digits is not 14\n");
   }
   return 0;
}


