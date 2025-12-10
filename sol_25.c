/*Program to get a three digit number as input and repeatedly add its digits until the result becomess a single digit.*/

#include <stdio.h>

int main (void){
	int num,sum=0;
	printf("Enter a three digit number: ");
	scanf("%d",&num);
        loop1:if(num!=0){
		sum+=num%10;
		num=num/10;
		goto loop1;
	}
	if(sum>=10){
		num=sum;
		sum=0;
		goto loop1;
	}
	printf("The sum is %d\n ",sum);
	return 0;
}
