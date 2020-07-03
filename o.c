#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//Write a program to generate all combinations of 1, 2 and 3 using for loop

void work();

int main(){
	work();
}

void work(){
	int i = 1, j = 1, k = 1;
	for (i = 1; i <= 3; i++)
	{
	   for (j = 1; j <= 3; j++)
	   {
	      for (k = 1; k <= 3; k++)
	      {		 
			 printf("%d %d %d\n", i, j, k);
		  }
	   }
	}
}
