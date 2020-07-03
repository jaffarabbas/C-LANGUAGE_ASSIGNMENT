#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//A Library Charges A Fine For Every Book Returned Late. For First 5 Days The Fine Is 50 Paise, For 6-10 Days Fine Is One Rupee And Above 10 Days Fine Is 5 Rupees. If You Return The Book After 30 Days Your Membership Will Be Cancelled.
// Write A Program To Accept The Number Of Days The Member Is Late To Return The Book And Display The Fine Or The Appropriate Message

void work();

int main(){
	work();
}

void work(){
	int days;
float fine;

printf("Number of days late: ");
scanf("%d",&days);

if(days<=30)
{
if(days<=5)
fine=0.5;
else if(days>5&&days<=10)
fine=1;
else if(days>10&&days<=30)
fine=5;
printf("you have to pay fine of Rs %f",fine);
}
else
printf("Your membership has been canceled");

printf ("\n\nPress any key to close.");

getch ();
}
