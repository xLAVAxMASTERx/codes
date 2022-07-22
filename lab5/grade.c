#include <stdio.h>
void main()
{   int s;
    printf("Enter score");
    scanf("%d",&s);
    if(s>90)
     printf("A+");
    else if(s>80)
     printf("A");
    else if(s>70)
     printf("B+");
    else if(s>60)
     printf("B");
     else if(s>50)
     printf("C+");
    else if(s>40)
     printf("C");
    else if(s>30)
     printf("D");
    else
     printf("fail");       
}