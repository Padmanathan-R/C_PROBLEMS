/* Program to print the sum of numbers between 1 to 5 without using for, while */

#include <stdio.h>

int main (void) {
	int sum = 0,n =1;
        loop:if(n<6){
		  sum+=n;
		  n++;
		  goto loop;
        }
	printf("%d\n",sum);
	return 0;
}

