/*
Name:Phineas Kiprotich
Reg No:PA106/G/29213/25
Description:A C program to find the surface area and volume of a cylinder 
volume=πr^2h
S_A=2,πr^2+2πrh
*/

#include <stdio.h> //scanf(),printf()
#define PI 3.146
//mainfunction
int main(){
float radius,height,volume,surface_area;

//prompt user to enter radius
printf("Enter the radius of the cylinder:");
scanf("%.f",&radius);

//prompt user to enter height
printf("Enter the height of the cylinder:");
scanf("%f",&height);

//calculate volume and surface area
volume=PI * radius* radius* height;
surface_area=2 * PI * radius * radius + 2 * PI * radius * height;

//Display results
printf("Volume of cylinder = %.2f/n",volume);
printf("Surface area of cylinder = %.2f /n",surface_area);
return 0;

}


    