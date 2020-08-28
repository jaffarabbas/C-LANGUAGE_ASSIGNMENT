#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
// If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.

void work();

int main(){
	work();
}

void work(){
	/*Declaring and initializing variables*/
    int value,dig1,dig2,dig3,dig4,sum;

/*prompt to take the input*/
    printf("Please enter a foure-digit number: ");

/*Taking input*/   
    scanf("%d",&value);


/*Calculations*/
    dig1 = value % 10;
  
    /* e.g. if value is 12345 then 12345 % 10 gives 5*/
  
    value = value / 10;
  
    /* '12345/10' gives '1234.5' but this is integer division so digit/s after '.' will
    be dropped and we get '1234'*/
   
    dig2 = value % 10;
  
    /*now '1234 % 10' gives '4' and so on*/
    value = value / 10;
    dig3 = value % 10;
    value = value / 10;
    dig4 = value % 10;
   
   
    sum = dig4 + dig1;

/*showing Results*/   
    printf("\n   Solution: ");
    printf("\n   __________");
    printf("\n\n   Sum of %d and %d is: %d",dig4,dig1,sum);
    getch();
}
