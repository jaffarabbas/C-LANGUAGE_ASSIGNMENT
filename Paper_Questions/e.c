#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. 
//For example, if the number that is input is 12391, then the output should be displayed as 23502.

void work();

int main(){
	work();
}

void work(){
	int num, sum, i, number, count=0, n=1;

    printf("Enter N Digit's Number: ");
    scanf("%d", &num);

    number = num;

    //get the counter till then we have to run the loop

    while(number!=0)
    {
        number = number/10;
        count = count + 1;
    }

    for(i=1;i<count;i++)
    {
        n = n * 10;  //n = 10
        n = n + 1;   //n = 11
    }

    sum = num + n;
    printf("Output: %d", sum);
}
