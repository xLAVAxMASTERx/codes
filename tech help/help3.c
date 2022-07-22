#include <stdio.h>
#include <string.h>
int prime(int n){
 for(int i=2;i<n;i=i+1){
     if(n%i==0)
     return 0;
 }
 return 1;
 }   
 int main()
 {int i,k=1,m=0,t=1;
     char s[102];
     scanf("%s",s);
     int l=strlen(s);
     int freq[l];
      for(i=0;i<l;i=i+1)
       freq[i]=1;
     for(i=0;i<l-1;i=i+1)
     {
        if(s[i]==s[i+1])
        k=k+1;
        else{
            freq[m]=k;
            m++;
            k=1;
            i=i+1;
        }
     }
     for(i=0;i<l;i=i+1)
     {
         if(freq[i]==1)
         t=t*freq[i];
     }
     printf("%d",t);
 }

 
