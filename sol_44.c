/* Program to check if the input is less than or equal to 50 */

#include <stdio.h>

int main (void) {
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n<=50){
		printf("Success\n");
	}
	else{
		printf("Failure\n");
	}
        return 0;
}

