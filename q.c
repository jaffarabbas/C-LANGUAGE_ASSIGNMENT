#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//Write a program to produce the following outputs:


void work();

int main(){
	work();
}

void work(){
	int i, j, k,sp;

    //print 7th row
    for(i=0;i<=6;i++)
    {
        for(j=65;j<=71-i;j++) //loop for first half
        {
            printf("%c",j);

        }

        //add space between these string
        for(sp=1;sp<=i*2-1;sp++)
            printf(" ");

        for(k=71-i;k>=65;k--) //loop for next half (Second half)
        {
            if(k==71);
            else
                printf("%c", k);
        }


    printf("\n");
    }
    
    
     int rows, coef = 1, space;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
}
