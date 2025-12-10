/* Program to print 5 to 1 one by one without using for, while */

#include <stdio.h>

int main (void) {
	int n = 5;
        loop:if(n>0){
		  printf("%d\n",n);
		  n--;
		  goto loop;
        }
	return 0;
}


