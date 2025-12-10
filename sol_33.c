/* To check if the digit 0 and digit 1 are not identical*/

#include<stdio.h>

int main (void){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d\n",n%10 != n/10);
	return 0;
}
