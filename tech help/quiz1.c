#include<stdio.h>
int check(int a )
{int i;int j=a;
    for(i=0;i<400;i=i+1)
    {
        a=2*a;
        if(a>100)
        a=a-100;
        if(a==j)
        return 1;
    }
    return 0;
}
int main()
{ int n,m=0,i=3,s=0;
    scanf("%d",&n);
    while(m<n)
    {
        if(check(i)==1){
        s=s+i;
        m=m+1;
        }
        i=i+1;
    }
    printf("%d",s);
    return 0;
}
