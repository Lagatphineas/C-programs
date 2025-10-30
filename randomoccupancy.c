/*
Name:Phineas Kiprotich
Reg No.:PA106/G/29213/25
Date:26/10/2025
Description:A C program for 2D array on room occupancy
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int occupancy[5] [10];
	int floor , room;
	int occupied, vacant;
	srand(time(0));
	
	//prompt user to assign random 0 or 1 to each room
	for (floor = 0; floor <5; floor++) {
		for (room = 0 ; room < 10; room++){
			occupancy[floor] [room] = rand ()% 2;
		}
	}
	//prompt user to display occupancy details
	for (floor = 0; floor < 5; floor++) {
		occupied = 0;
		vacant = 0;
		
		for (room = 0; room < 10; room++) {
			if (occupancy[floor] [room] ==1)
				occupied++;
			else
				vacant++;
		}
		printf("Floor %d: Occupied = %d,Vacant = %d\n", floor + 1, occupied, vacant);
			}
			return 0;
		}

