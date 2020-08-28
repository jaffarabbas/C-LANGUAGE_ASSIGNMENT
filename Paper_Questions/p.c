#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//According to a study, the approximate level of intelligence of a person can be calculated using
//the following formula: i = 2 + ( y + 0.5 x ) 

void work();

int main(){
	work();
}

void work(){
	
int y;
float i,x;

for (y=1; y<=6; y++)

{
for (x=5.5; x<=12.5;x+=0.5)

{
i=2 + (y+ (0.5*x)) ;


printf("\n i=%f, y=%d, x=%f", i, y, x);
continue;
}
}
  
}
