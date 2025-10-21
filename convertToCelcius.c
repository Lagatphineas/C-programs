/*
NAME:Phineas Kiprotich
REG NO.:PA106/G/29213/25
DATE:21/10/2025
DESCRIPTION:A C program to convert to celcius
*/

#include <stdio.h>

float convertToCelcius(float fahrenheit) {
	return (fahrenheit - 32) * 5 / 9;
}

int main(){
	float fahrenheit;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f" , & fahrenheit);
	
	printf("Temperature in Celcius = %.2f C\n" , convertToCelcius(fahrenheit));
	return 0;
}