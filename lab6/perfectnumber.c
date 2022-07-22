#include <stdio.h>
void main()
{   int n,i,s=0;
    printf("enter number ");
    scanf("%d",&n);
 
    for(i=1;i<n;i=i+1)
    {
        if(n%i==0)
        {
            s=s+i;
        }
        
    }
    if(n==s)
      printf("it is a perfect number ");
     else
      printf("it is not a perfect number ");
   
    
    
        
}