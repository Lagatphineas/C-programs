/*
Name:Phineas Kiprotich
Reg No:PA106/G/29213/25
Date:01/10/2025
Description:A C program on loan eligibility
*/

#include<stdio.h>
int main(){
int age;
float income;

//Prompt user to enter age
printf("Enter your age: ");
scanf("%d" ,&age);

//Prompt user to enter income
printf("Enter your annual income (in Sh):" );
scanf("%f" ,&income);

//Check eligibility
if (age >= 21 && income >= 21000){
	printf("Congratulations you qualify for a loan. \n");
}
else {
	printf("Unfortunately, we are unable to offer you a loan at this time.\n");
}
return 0;
}