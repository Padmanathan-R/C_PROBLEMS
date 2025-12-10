/* Program to check if the input is 50 */

#include <stdio.h>

int main (void) {
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n !=50){
		printf("Failure\n");
	}
	else{
           printf("Success\n");
	}
	return 0;
}

