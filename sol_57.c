/* Program to get an user input and print the output in which the first and last digits are interchanged */

#include <stdio.h>

int main (void)
{
	int n,len = 0,temp;
	printf("Enter a number : ");
	scanf("%d",&n);
	temp = n;
        loop:if(temp!=0){
		  len++;
		  temp/=10;
		  goto loop;
	     }

	int temp1 = n/10,i = 1;
        loop1:if(temp1!=0){
		  i*=10;
		  temp1/=10;
		  goto loop1;
	     }
	
	int temp2 = n,first_digit = temp2/i,last_digit = temp2%10,middle_digit = (temp2%i)/10;
	printf("%d",last_digit);
	printf("%d",middle_digit);
	printf("%d\n",first_digit);
	return 0;
}
