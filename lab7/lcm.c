#include <stdio.h>
int lcm( int a,int  b)
{
    int i;
    int g=a*b;
    while(i<=g)
    {
       i++;
       if(i%a==0 && i%b==0)
       {
           return i;
       }
    }
    return i;
}

void main()
{   int a,b;
    printf("enter 2  number of inputs");
    scanf("%d",&a); 
    scanf("%d",&b); 
    int m=lcm(a,b);
    printf("lcm is, %d",m);        
}
