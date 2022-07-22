#include<stdio.h>
#include<string.h>
int main(){
    int i,n,j,k=0;
    char str[100];
    scanf("%s",&str);
    int l=strlen(str);
    printf("%d",l);
    for(i=0,j=l-1;i<=j;i=i+1,j=j-1)
    {
        if(str[i]!=str[j])
        k=1;
    }
    if(k==1)
    printf("is not  a palidrome");
    else
     printf("is  a palidrome");

}