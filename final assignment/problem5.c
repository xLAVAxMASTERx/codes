#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int i,j,n=0,m,p=0;
    char s[100];
    scanf("%s",s);
    int l =strlen(s);
    for(i=0;i<l;i=i+1){
        int k=s[i];
        if(k==46){
           p+=1;
           if(p>1)
           m=-1;
           else if(p==1)
           m=n;
           else
           m=0;
        }
        else
            n=n+k-48;
    }
    printf("%d",m);
}
