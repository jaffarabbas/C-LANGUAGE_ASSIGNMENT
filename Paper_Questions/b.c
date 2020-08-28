#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//If a five-digit number is input through the keyboard, write a program to reverse the number.

void work();

int main(){
	work();
}

void work(){
	 long num,a,b,c,d,e,rev;
 printf("Enter a five digit number\n");
 scanf("%ld",&num);
 a=num%10; b=num/10;
c=b%10; b=b/10;
d=b%10; b=b/10;
e=b%10; b=b/10;
rev=a*10000+c*1000+d*100+e*10+b*1;
printf("Reverse of %ld is %ld",num,rev);
}
