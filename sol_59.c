/* Program to find whether the given input number is prime or not */

#include <stdio.h>

int main (void)
{
    int n,start = 2,prime=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    loop:if(start < n){
	      if(n%start == 0){
		  prime = 0;
	      }
	      else{
		  start++;
	          goto loop;
	      }
	  }
    if(prime){
	 printf("The number is Prime\n");
    }
    else{
	 printf("The number is not Prime\n");
    }
    return 0;
}

              



