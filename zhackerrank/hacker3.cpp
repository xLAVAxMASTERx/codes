#include<iostream>
using namespace std;
int check(int n)
{int i,m=0;
    for(i=2;i<n/2;i=i+1)
    {
        if(n%i==0)
            m=m+1;
    }
    if(m==0)
    return 1;
    else
    return 0;
}
int main()
{ int t,i;
    cin>>t;
    cout<<""<<endl;
    cout<<""<<endl;
    for(i=2;i<t;i=i+1)
    {
         cout<<""<<endl;
       if(check(i)==1)
        
         cout<<i<<endl;
    }
    return 0;
}
