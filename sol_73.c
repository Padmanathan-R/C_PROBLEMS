/* Program to interchange the first and last digits of the input number and print the output using while loop */

#include <stdio.h>

int main (void)
{
   int n,temp = n;
   printf("Enter a number : ");
   scanf("%d",&n);

   int temp1 = n/10, i = 1;
   while(temp1!=0){
	   i*=10;
	   temp1/=10;
   }

   int temp2 = n,first_digit = temp2/i,last_digit=temp2%10,middle_digit = (temp2%i)/10;
   printf("%d",last_digit);
   printf("%d",middle_digit);
   printf("%d\n",first_digit);
   return 0;
 }




