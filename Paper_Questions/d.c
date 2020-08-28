#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of the total population, 
//write a program to find the total number of illiterate men and women if the population of the town is 80,000.
void work();

int main(){
	work();
}

void work(){
	 long t,m,w,lm,lw,l,im,iw;
 t=80000;
 m=80000*52/100;
 w=t-m;
 lm=t*35/100;
 l=t*48/100;
 lw=l-lm;
 im=m-lm;
 iw=w-lw;
 printf("Total population = %ld\n",t);
 printf("Total men = %ld\n",m);
 printf("Total women = %ld\n",w);
 printf("Total literate men = %ld\n",lm);
 printf("Total  literate women = %ld\n",lw);
 printf("Total illiterate men = %ld\n",im);
 printf("Total illiterate women = %ld\n",iw);
}
