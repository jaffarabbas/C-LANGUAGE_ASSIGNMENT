#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//How to write a C Program to print all prime numbers from 1 to 300

void work();

int main(){
	work();
}

void work(){
	
int number, div, ifprime;
 
for (number=2;number<=300;number++)
 
{
 
for (div=2; div<number; div++)
 
{
if (number%div==0)
{
 
ifprime=0;
break;
}
 
ifprime=1;
 
}
 
if (ifprime)
{
printf("\n%d", number);
 
}
}
}
