#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//According to the Gregorian calendar, it was Monday on 01/01/01. C program to find out what is the day on 1st January of the input year.

void work();

int main(){
	work();
}

void work(){
	 int yr, ref_yr=2001, diff, lpyr, nmyr, td, day;

    /** Variable Explanation:-
    yr= requested year input
    ref_yr= reference year
    diff= difference b/w ref_yr & yr
    lpyr= leap years b/w ref_yr & yr
    nmyr= normal years b/w ref_yr & yr
    td= total no. of days b/w ref_yr & yr
    day= stores the day of the week
    **/

    printf("Enter a year:- ");
    scanf("%d", &yr);

    diff=yr-ref_yr;

    lpyr=diff/4;

    nmyr=diff-lpyr;

    td=((nmyr*365)+(lpyr*366));

    day=td%7;

    if (day==0)
        printf("\nMonday\n");
    else if (day==1)
        printf("\nTuesday\n");
    else if (day==2)
        printf("\nWednesday\n");
    else if (day==3)
        printf("\nThursday\n");
    else if (day==4)
        printf("\nFriday\n");
    else if (day==5)
        printf("\nSaturday\n");
    else if (day==6)
        printf("\nSunday\n");

}
