/* Program to  print the two digit odd numbers below 20 */

#include <stdio.h>

int main (void) {
	int n = 11;
        loop:if(n<20){
		  if(n%2!=0){
			printf("%d\n",n);
		  }
		  n++;
		  goto loop;
	      }
	      return 0;
}

	
