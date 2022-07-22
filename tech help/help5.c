#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];int a,b=0;
    scanf("%s", &s);
    int l=strlen(s);
    s[l]='s';
    for(int i = 0; i<=l; i++){
        if(s[i]=='a')
            a=a+1;
        if(s[i]=='s') {
        if(a>b)
        b=a;
        a=0;
        } 
    }
    printf("%d",b);
    return 0;
}
 
