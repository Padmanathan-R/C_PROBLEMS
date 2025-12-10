/* Program to get a number from user and if the last digit is even print the same number, if the last digit is odd then subtract 1 from the MSB and print the output */

#include <stdio.h>

int main (void)
{
	int n,len = 0,temp = n;
	printf("Enter a number : ");
	scanf("%d",&n);

        int temp1 = n/10;

        loop:if(temp!=0){
		  len++;
		  temp/=10;
		  goto loop;
		 }
	int i=1;
	loop1:if(temp1!=0){
		   i*=10;
		   temp1/=10;
		   goto loop1;
	      }
	
	 int temp2 = n,MSB = temp2/i,temp3 = temp2%i;
	 if((n%10)%2==0){
	       printf("%d\n",n);
         }
         else{
	    printf("%d",MSB-1);
	    printf("%d\n",temp3);
	 }
	 return 0;
}



        

