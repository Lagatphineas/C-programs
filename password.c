/*
Name:Phineas Kiprotich
Reg No.:PA106/G/29213/25
Date:08/10/2025
Description:A C program on ATM withdrawal
*/

#include<stdio.h>
#include<string.h>

int main() {
	char password[20];
	
	do{
	printf("Enter password:");
	scanf("%s", password);	
	}
	while(strcmp(password, "1234")!=0);
	
	printf("Access Granted\n");

return 0;
}