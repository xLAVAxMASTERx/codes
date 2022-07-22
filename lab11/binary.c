#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int i,s=0,m;
    char str[100];
    scanf("%s",&str);
    int l=strlen(str);
    
    for(i=l-1;i>=0;i=i-1)
    {
        m=(int)str[i];
        s=s+m*pow(2,i);
    }
  
    printf("%d",s);
}//printf("%0.*f\n",n,c)