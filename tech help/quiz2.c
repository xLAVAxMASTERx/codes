#include<stdio.h>
#include<string.h>
int main()
{ int n,i,j,s=0;char str[1000];char t;
char m[5]={'@', '*', '&', '$', '#'};
int a [5]={0,0,0,0,0};
 scanf("%s",&str);
 int l=strlen(str);
   for(i=0;i<l;i=i+1)
   {
       for(j=0;j<5;j=j+1)
       {
           if(str[i]==m[j])
           a[j]=a[j]+1;
       }
   }
    for(i=0;i<5;i=i+1)
   {
       for(j=0;j<5;j=j+1)
       {
           if(a[j]>a[i])
           {
               t=m[j];
               m[j]=m[i];
               m[i]=t;
           }
       }
   }
    printf("%s",m);
    return 0;
}
