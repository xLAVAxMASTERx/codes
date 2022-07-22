#include<stdio.h>
int gcd( int a,int  b)
{ int i,p;
    for(i=1;i<=a;i=i+1)
    {
        if(a%i==0 && b%i==0)
            p=i; 
    }
   return p;
}
int main()
{ 
    int a,b,c,d,x,y,j;

  printf("Enter number");
  scanf("%d/%d + %d/%d",&a,&b,&c,&d);
  x=b*c+d*a;
  y=b*d;
  j=gcd(x,y);
  x=x/j;
  y=y/j;

   printf("%d/%d",x,y);
   }