#include <stdio.h>
void main()
{   int n,k;int arr[10],i=0;
    for(i=0;i<10;i=i+1) 
     {
         arr[i]=0;
     } 
     i=0;
    printf("enter number ");
     scanf("%d",&n);
    while(n!=0)
    {   
        k=n%2;
        arr[i]=k;
        i=i+1;
        n=n/2;
    }
     printf("binary value is ");    
     for(i=9;i>=0;i=i-1) 
     {
         printf("%d",arr[i]);
     } 
}