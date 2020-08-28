#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//Write a program to add first seven terms of the following series using For-Loop : (1/1!)+(2/2!)+(3/3!)+…………


void work();

int main(){
	work();
}

void work(){
	int i,j,n;  //Declaration of variables
      long float fact=1,sum=0,div; //Declaration of variables
      clrscr();
      for(i=1;i<=7;i++) //For Loop for calculating Sum
      {
            fact=1;
            for(j=1;j<=i;j++)
            {
                  fact*=j;    //Calculation of Factorial
            }
            div=i/fact;
            sum+=div;  
      }
      printf("\nSum of First Seven Terms : %5.2f",sum);
      getch();
}
