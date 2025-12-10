/* Program to print 1 to 5 one by one without using for,while */

#include <stdio.h> 

int main (void) {
	int n = 1;
        loop : if(n<6){
		  printf("%d\n",n);
		  n++;
		  goto loop;
                  }
	return 0;
}

