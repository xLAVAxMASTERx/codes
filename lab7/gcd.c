#include <stdio.h>
int gcd( int a,int  b)
{ int i,p;
    for(i=1;i<=a;i=i+1)
    {
        if(a%i==0 && b%i==0)
            p=i; 
    }
   return p;
}
void main(){   int i,a,b;
    printf("enter 2  number of inputs");
    scanf("%d",&a); 
    scanf("%d",&b);
     if(a==0 && b==0)
        printf("-1");        
     else if(a==0 && b!=0)
        printf("%d,",b);        
     else if(a!=0 && b==0)
        printf("%d,",a);        
    else{
    int m=gcd(a,b);
    printf("gcd is, %d",m);        
}
}
