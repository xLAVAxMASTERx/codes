#include<iostream>
#include<string>
using namespace std;
int main()
{int i,num;string s;
cin>>num;
for(i=0;i<num;i=i+1)
{
    cin>>s;
    int a=1;
   int  l=s.length();
   for(i=0;i<l;i=i+1)
   {
       if(s[i]=='1' && s[i+1]='0')
        a=a+1;
         if(s[i]=='0' && s[i+1]='1')
        a=a+1;
         if(s[i]=='?' && s[i+1]='?')
        a=a+1;
         if(s[i]=='1' && s[i+1]='?')
        a=a+1;
         if(s[i]=='0' && s[i+1]='?')
        a=a+1;
         if(s[i]=='?' && s[i+1]='1')
        a=a+1;
         if(s[i]=='?' && s[i+1]='0')
        a=a+1;
       
   }
}