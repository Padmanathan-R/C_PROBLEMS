/* Program to print the reverse of the input number */

#include <stdio.h>

int main (void) {
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
        loop:if(n!=0){
		 printf("%d",n%10);
		 n /= 10;
		 goto loop;
	     }
	     printf("\n");
	     return 0;
}

