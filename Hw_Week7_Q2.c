#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void ToBinary(int TERM){
	int total[MAX_SIZE], i, j;

	//perfom opertation to turn number from integer to Binary
	for(i = 0; TERM > 0; i++){
    	total[i]= TERM % 2; 
    	TERM = TERM / 2;
	}
    
    printf("The number in binary is: ");
    
    //Print out the value
    for(j = i - 1; j >= 0; j--){
    	printf("%d", total[j]);
	}
	
}//function

int main(int argc, char *argv[]){
    int term;

    printf("Input number to convert to binary: ");
    scanf("%d", &term); 
    
    //call function
    ToBinary(term); 

    return 0;
}//main

