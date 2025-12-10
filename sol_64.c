/* Program to print odd number between 1 and 9 */

#include <stdio.h>

int main (void)
{
    int n = 1;
    while(n<10){
	 if(n%2!=0){
	     printf("%d\n",n);
	  }
	 n++;
    }
    return 0;
}

