/*
NAME:Phineas Kiprotich
REG NO.:PA106/G/29213/25
DATE:21/10/2025
DESCRIPTION:A C program to calculate fare
*/

#include <stdio.h>
 float calculatefare(float distance){
	 return distance * 50;
	 
 }
 
 int main(){
	 float distance;
	 printf("Enter distance travelled (in km): ");
	 scanf("%f" , &distance);
	 
	 printf("Total fare = KSH. %.2f\n" ,calculatefare(distance));
	 return 0;
 }