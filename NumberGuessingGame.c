/*
Name:Phineas Kiprotich
Reg No.:PA106/G/29213/25
Date:08/10/2025
Description:A C program on number guessing game
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int secret , guess , attempts = 0;
	
srand(time(0));
secret = (rand() %20 )+ 1;

printf("Guess the number( between 1 and 20):\n");

while (1) {
	printf("Enter your guess: ");
	scanf("%d" , &guess);
	attempts ++;
	
	if (guess > secret){
		printf("Too high!\n");
	}else if (guess < secret){
		printf("Too low!\n");
	}else {
		printf("Congratulations! You guessed the number in %d attempts. \n", attempts);
		break;
	}
}
return 0;
}