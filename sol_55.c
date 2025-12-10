/* Program to print the sum of digits present in the given number */

#include <stdio.h>

int main (void) {
	int n,sum = 0;
	printf("Enter a number : ");
	scanf("%d",&n);
        loop:if(n!=0){
		  sum += n%10;
		  n /= 10;
		  goto loop;
	     }
	     printf("%d\n",sum);
	     return 0;
}

	
