#include<stdio.h>
#include<conio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter,
// a digit or a special symbol. The following table shows the range of ASCII values for various characters.


void work();

int main(){
	work();
}

void work(){
	char ch;
 printf("Enter a character:");
 scanf("%c",&ch);
 if(ch>=65 && ch<=90)
 {
  printf("\n Upper case letter");
 }
 else if(ch>=97 && ch<=122)
 {
  printf("\n Lower case letter");
 }
 else if(ch>=48 && ch<=57)
 {
  printf("\n Digit");
 }
 else if((ch>=0 && ch<=47) || (ch>=58&& ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
 {
  printf("\n Special symbol");
 }
 getch();
}
