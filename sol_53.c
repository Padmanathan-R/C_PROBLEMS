/* Program to print the total sum of two digit odd numbers whose ten's digit is 7 without using for and while loops */

#include <stdio.h>

int main (void) {
	int n = 11,sum = 0;
        loop:if(n<100){
		 if(n%2!=0){
		     if(n/10 == 7){
			  sum += n;
		     }
		  }
		  n++;
		  goto loop;
	     }
	     printf("%d\n",sum);
	     return 0;
}

