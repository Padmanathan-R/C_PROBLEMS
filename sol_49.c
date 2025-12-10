/* Program to print the odd numbers between 1 to 9 */

#include <stdio.h>

int main (void) {
	int n = 1;
        loop:if(n<10){
	        if(n%2 !=0){
			printf("%d\n",n);
		}
	     n++;
	     goto loop;
	     }
	     return 0;
}

