#include<stdio.h>

//done by DARKLORD.
//BELONGING ORGANIZATION : MAJU.@APTECH.@PIAIC.@WORLD_OF_DARKLORD_
//Main_Source git link : https://github.com/jaffarabbas
//Site:https://assignment-69ea5.web.app/
//Mail:gamaportal8@gmail.com
//GIT LINK : https://github.com/jaffarabbas/C-LANGUAGE_ASSIGNMENT.git
//Given the coordinates (x, y) of a center of a circle and it�s radius, write a program which will
//determine whether a point lies inside the circle, on the circle or outside the circle

void work();

int main(){
	work();
}

void work(){
	 int x1, y1, x2, y2, radius;
    float pc;

    printf("Enter the center co-ordinates of the circle: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("Enter the point co-ordinates: ");
    scanf("%d %d", &x2, &y2);

    //check for distance between point and center point of circle

    pc = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));

    if(pc>radius)
        printf("Point (%d,%d) lies outside the circle.", x2, y2);
    else if(pc<radius)
        printf("Point (%d,%d) lies inside the circle.", x2, y2);
    else if(pc==radius)
        printf("Point (%d,%d) lies on the boundary of circle.", x2, y2);
    else
        printf("Wrong Entry");
}
