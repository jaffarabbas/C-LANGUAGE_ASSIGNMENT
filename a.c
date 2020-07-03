#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//If a five-digit number is input through the keyboard , write a c program to calculate the sum of its digits.

void work();

int main(){
	work();
}

void work(){
	int number, sum=0, i, n, count=0, num;
    printf("Enter a Number: "); //we are taking n digits number as input
    scanf("%d", &number);
    num = number;
    while(num!=0)
    {
        num /= 10;
        count += 1;
    }
    for(i=0;i<count;i++)    //i=0 to i=count-1 (length(number))
    {
        n = number % 10;
        number = number / 10;
        sum = sum + n;
    }

    printf("Sum: %d", sum);
}
