/* Program to print the two digit odd numbers, who's sum of digits are 7 */

#include <stdio.h>

int main (void) {
	int n = 11;
        loop:if(n<100){
		 if(n%2!=0){
                     if((n%10)+(n/10) == 7){
		         printf("%d\n",n);
		      }
		   }
		   n++;
		   goto loop;
	      }
	      return 0;
}

