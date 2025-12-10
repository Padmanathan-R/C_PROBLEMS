/* Program to print failure if the input is 50 and print success for rest of the input */

#include <stdio.h> 

int main (void) {
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n!=50){
		printf("Success\n");
	}
	else{
           printf("Failure\n");
	}
	return 0;
}

