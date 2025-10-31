#include <stdio.h>

int main(void){
	float A;
	float B;
	printf("Determine the type of solution for the equation Ax^2+Bx+1\n");
	printf("Enter the number to be substituted for A:");
	scanf("%f", &A);
	printf("Enter the number to be substituted for B:");
	scanf("%f", &B);
	if((B*B-4*A)>0){
		printf("The solusion is two real numbers.");
	}
	else if((B*B-4*A)==0){
		printf("The solusion is one real number.");
	}
	else if((B*B-4*A)<0){
		printf("The solusion is two imaginary numbers.");
	}
	else{
		printf("error");
	}
}
				
		