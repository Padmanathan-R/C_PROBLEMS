/* Program to print the sum of 6 to 1 using while loop */

#include <stdio.h>

int main (void)
{
    int n=6, sum = 0;
    while(n>0){
	 sum+=n;
	 n--;
    }
    printf("%d\n",sum);
    return 0;
}

