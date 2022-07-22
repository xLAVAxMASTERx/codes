#include<iostream>
using namespace std;
int check(int a ,int b,int c ,int x ,int y)
{
    if(a>=x)
    x=0;
    else
    x=x-a;
    if(b>=y)
    y=0;
    else
    y=y-b;
    if(c>=(x+y))
    return 1;
    else
    return 0;
}
int main()
{ int a , b, c , x , y,t,i;
    cin>>t;
    for(i=0;i<t;i=i+1)
    {
       cin>>a>>b>>c>>x>>y;
       if(check(a,b,c,x,y)==1)
         cout<<"YES\n";
       else
          cout<<"NO\n";
    }
    return 0;
}
