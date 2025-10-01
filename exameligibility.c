/*
Name:Phineas Kiprotich
Reg No:PA106/G/29213/25
Date:30/9/2025
Description:C program on exam eligibility
*/

#include <stdio.h>
 
 int main(){
	 float attendance, marks;
	 
	 //prompt user to enter percentage
	 printf("Enter attendance percentage:");
	 scanf("%f", &attendance);
	 
	 //prompt user to enter average marks
	 printf("Enter average marks:");
	 scanf("%f",&marks);
	 
	 //check eligibility
	 if (attendance >=75 && marks >=40){
		 printf("Eligible foe exam \n");
	 }
	 else{
		 printf("not eligible for an exam \n");
	 }
	 return 0;
 }