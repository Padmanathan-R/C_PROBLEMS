/* Program to print the two digit even numbers whose sum is 6 without using for, while loops */

#include <stdio.h>

int main (void) {
	int n = 12;
        loop:if(n<100){
		 if(n%2==0){
		    if((n%10) + (n/10) == 6){
			printf("%d\n",n);
		    }
		 }
		 n++;
		 goto loop;
	     }
	     return 0;
}


