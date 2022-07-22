#include<stdio.h>
#include<math.h>
int arm( int a)
{   int k=a;int s=0,d,n=0,m;
     while(k!=0)
    {
        n=n+1;
        k=k/10;
    }
    k=a;
     while(k!=0)
    {
        d=k%10;
        m=pow(d,n);
        s=s + m;
        k=k/10;
    }
    if(a==s)
    {
        return a;
    }
    else
    {
        return 0;
    }
} 

void main()
{   int i,a,s=0;
    
    for(i=0;i<=999;i=i+1)
    {
       s=s+ arm(i);
    }
    
    printf("required sum is, %d",s);        
}
