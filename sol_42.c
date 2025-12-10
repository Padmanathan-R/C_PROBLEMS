/* Program to print success if the input is less than 50 otherwise print failure */

#include <stdio.h>

int main (void) {
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n < 50){
		printf("Success\n");
	}
	else{
		printf("Failure\n");
	}
	return 0;
}
