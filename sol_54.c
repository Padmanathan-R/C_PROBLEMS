/* Program to count the number of digits present in the given input without using for and while loops */

#include <stdio.h>

int main (void) {
	int n, count = 0;
	printf("Enter a number : ");
	scanf("%d",&n);
        loop:if(n!=0){
		 count++;
		 n/=10;
                 goto loop;
	      }
	     printf("%d\n",count);
	     return 0;
}

	
