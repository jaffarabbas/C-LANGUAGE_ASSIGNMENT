#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//Write a program for a matchstick game being played between the computer and a user. Your
//program should ensure that the computer always wins. Rules for the game are as follows:
//o - There are 21 matchsticks.
//o - The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
//o - After the person picks, the computer does its picking.
//o - Whoever is forced to pick up the last matchstick loses the game.


void work();

int main(){
	work();
}

void work(){
	int matchsticks=21, user, computer;

printf("Do not enter Invalid Numbers.\nNumbers above 4 are invalid.");

printf("\nIf you do so, the computer automatically wins.");

while (matchsticks>=1)
{

printf("\nNumber of matchsticks available right now is %d.", matchsticks);

printf("\n\nYour Turn...\n\n\n");

printf("\nPick up the matchstick(s)-- (1-4): ");
scanf ("%d", &user);

if (user>4)

{
printf("Invalid Selection");
break;
}

computer=5-user;

printf("\nComputer's Turn..\n" );
printf("\nComputer chooses:%d", computer);

matchsticks=matchsticks-user-computer;
continue;

if(matchsticks==1)

break;
}

matchsticks--;
printf("\nComputer Wins");

}
