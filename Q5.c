// Q5. Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on
// the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant in
// game development and robotics navigation
#include<stdio.h>
int main (){
    int x , y ;
    printf("Enter x coordinate : ");
    scanf("%d",&x);
    printf("Enter y coordinate : ");
    scanf("%d",&y);
    if(x > 0 && y > 0){
        printf("Point (%d,%d) lies in First Quadrant",x,y);
    }
    else if(x < 0 && y > 0){
        printf("Point (%d,%d) lies in Second Quadrant",x,y);
    }
    else if(x < 0 && y < 0){
        printf("Point (%d,%d) lies in Third Quadrant",x,y);
    }
    else if(x > 0 && y < 0){
        printf("Point (%d,%d) lies in Fourth Quadrant",x,y);
    }
    else if(x == 0 && y == 0){
        printf("Point (%d,%d) lies at Origin",x,y);
    }
    else if(x == 0){
        printf("Point lies on Y axis");
    }
    else{
        printf("Point lies on X axis");
    }
    return 0;
}
