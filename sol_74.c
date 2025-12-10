/* Program to print the same input number as output if the last digit it is even else subtract 1 from the MSB and print the output */

#include <stdio.h>

int main (void)
{
     int n;
     printf("Enter a number : ");
     scanf("%d",&n);

     int temp = n,temp1 = n/10;

     if((temp%10)%2==0){
	     printf("%d\n",n);
     }
     else{
	 int i = 1;
	 while(temp1 != 0){
	     i*=10;
	     temp1/=10;
	 }
	 int MSB = n/i;
	 printf("%d",MSB-1);
	 printf("%d\n",n%i);
     }
     return 0;
}

     
