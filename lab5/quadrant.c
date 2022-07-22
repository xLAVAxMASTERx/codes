#include <stdio.h>
void main()
{   int x,y;
    printf("x");
    scanf("%d",&x);
    printf("y");
    scanf("%d",&y);
    if(x==0 && y==0)
     printf("origin");
    else if(x>=0 && y>=0)
     printf("quadrant 1");
    else if(x<=0 && y==0)
     printf("quadrant 2");
    else if(x<=0 && y<=0)
     printf("quadrant 3");
    else
     printf("quadrant 4");       
}