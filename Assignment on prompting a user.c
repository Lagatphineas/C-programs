/*
Name:Phineas Kiprotich
Reg No:PA106/G/29213/25
Description:A C program to prompt user to enter height,Id number and bank balance
*/

#include <stdio.h>
//mainfunction
int main(){
float height;
double bank_balance;
long id_number ;

printf("Enter your height :");
scanf("%.f",&height);

printf("Enteryour ID number:");
scanf("%ld",&id_number);

printf("Enter your bank balance:");
scanf("%lf",&bank_balance );

return 0;

}


