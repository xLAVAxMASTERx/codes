#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int t,k,i;
    cin>>t;
    int a[t];
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for(i=3;i<t;i=i+1)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    cout<<" output:"+a[t-1];
}
