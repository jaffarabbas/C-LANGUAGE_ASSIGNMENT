#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//Write a menu driven program which has following options: 1. Factorial of a number 2. Prime or not 3. Odd or even 4. Exit Once a menu item is selected the 
//appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the �Exit� option the program should
// continue to run


void work();

int main(){
	work();
}

void work(){
	int c=0, num, res, n, flag=0, i;
    while(c!=4)
    {
        //display menu
        printf("\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");

        //display choice option to the user
        printf("\nEnter your choice:");
        scanf("%d", &c);

        //write case statement for Four options

        switch(c)
        {
            //For factorial block
            case 1:

                //code for factorial functionality
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;
                res=num;
                while(num>1)
                {
                    res = res*(num-1);
                    num = num-1;
                }
                printf("\nFactorial of %d is %d. \n\n",n, res);
                break;

            //For prime block
            case 2:

                //functionality of Prime or not

                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                for(i=2;i<=n/2;i++)
                {
                    if(num%i==0)
                    {
                        flag=1;
                        break;
                    }
                }

                //for number "1" it's neither prime nor composite
                if(num==1)
                    printf("\n1 is neither prime nor composite");
                else
                {
                        if(flag==0)
                            printf("\n%d is Prime Number.\n\n", n);
                        else
                            printf("\n%d is not a Prime Number.\n\n", n);
                }
                break;

            //For Odd-even block
            case 3:

                //functionality for Odd-even
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                if(num%2==0)
                    printf("\n%d is Even Number.\n\n",n);
                else
                    printf("\n%d is Odd Number.\n\n",n);
                break;

            //For Exit block
            case 4:
                printf("\nExit");
                break;
        }
    }
}
