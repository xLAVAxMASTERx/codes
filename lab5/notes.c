#include <stdio.h>
void main()
{   int s,k=0;
    printf("money");
    scanf("%d",&s);
    while(s>=500)
    {
        s=s-500;
        k=k+1;
    }
     while(s>=100)
    {
        s=s-100;
        k=k+1;
    }
    while(s>=50)
    {
        s=s-50;
        k=k+1;
    }
    while(s>=20)
    {
        s=s-20;
        k=k+1;
    }
    while(s>=10)
    {
        s=s-10;
        k=k+1;
    }
    while(s>=5)
    {
        s=s-5;
        k=k+1;
    }
    while(s>=2)
    {
        s=s-1;
        k=k+1;
    }
    printf("number of notes,%d",k);
    
}