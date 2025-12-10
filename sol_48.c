/* Program to print the sum of digits between 6 to 1 without using for, while */

#include <stdio.h>

int main (void) {
	int sum =0, n = 6;
        loop:if(n>0){
		 sum+=n;
		 n--;
		 goto loop;
	}
	printf("%d\n",sum);
	return 0;
}

