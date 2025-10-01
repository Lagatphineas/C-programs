/*
Name:Phineas Kiprotich
Reg No:PA106/G/29213/25
Date:01/10/2025
Description:C program that calculates water bills
*/

#include <stdio.h>

int main (){
	int units;
	float bill = 0.0;
	
	//prompt user for input
	printf("Enter water units consumed:");
	scanf("%d", &units);
	
	//calculate bill based on units consumed
	if (units <= 30) {
		bill = units * 20;
	}
	else if (units <=60) {
		bill = (30*30) + ((units - 30) * 25);
	}
	else {
		bill =(30 * 20) + (30 *  25) + ((units - 60) * 30);
	}
	
	// display totall bill with 2 decimal places
	printf("t0tal ware bill: %.2f KES\n", bill);
	
	return 0;
}