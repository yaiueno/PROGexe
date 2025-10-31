#include <stdio.h>

int main(void){
	int i=0;
	int lowercaseletters=0;
	printf("ASCII test\n");
	while (i<26){
		printf("%c ", i+65);
		printf("%c ", i+65+'a'-'A');
		i++;
	}
	while(1){
		printf("\nPlease enter lowercase letters:");
		scanf(" %c",&lowercaseletters);
		printf("Uppercase letters are %c", lowercaseletters-32);
	}
}