/* Program to print sum of 1 to 5 using while loop */

#include <stdio.h>

int main (void)
{
    int n = 1, sum = 0;
    while(n < 6){
	 sum+=n;
	 n++;
    }
    printf("%d\n",sum);
    return 0;
}
