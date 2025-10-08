/*
Name:Phineas Kiprotich
Reg No.:PA106/G/29213/25
Date:08/10/2025
Description:A C program on ATM withdrawal
*/

#include<stdio.h>

int main(){
	float balance , withdraw;
	 
	 printf("'Enter initial balance:");
	 scanf("%f" , &balance);
	 
	 while(balance > 0) {
		 printf("Enter amount to withdraw:");
		 scanf("%f" ,&withdraw);
		 
		 balance -=withdraw;
		 printf("Remaining balance: %.2f\n" , balance);
		 
		 if(balance <= 0){
			 printf("Insufficient balance. Transaction stopped. \n");
			 
		 } 
	 }
		 return 0; 
	 }	 