#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. 
//The triangle is valid if the sum of two sides is greater than the largest of the three sides.
void work();

int main(){
	work();
}

void work(){
	 //we are assuming only integer values for triangle sides
    int x, y, z;
    int max, valid;
    // x for AB y for BC z for AC

    //now calculate max side value among all the sides
    //Take input
    printf("Enter the first side of triangle: ");
    scanf("%d", &x);
    printf("Enter the second side of triangle: ");
    scanf("%d", &y);
    printf("Enter the third side of triangle: ");
    scanf("%d", &z);

    max = x;

    if(max<y)
        max=y;

    if(max<z)
        max=z;

    //now check for validation rules
    //if largest side is lower than the sum of two remaining sides
    if(max == x && x < (y+z))
        valid = 1;

    if(max == y && y < (x+z))
        valid = 1;

    if(max == z && z < (x+y))
        valid = 1;

if (valid==1)
    printf("Triangle is valid");
else
    printf("Triangle is not valid");
}
