/* Program to print Success if the input is greater than 50 otherwise print failure */

#include <stdio.h>

int main (void) {
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n > 50){
		printf("Success\n");
	}
	else{
		printf("Failure\n");
	}
	return 0;
}


