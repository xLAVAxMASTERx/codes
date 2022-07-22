#include<stdio.h>
#include<string.h>
int check(int m,int n,int k){
    while(k>0){
        int d=k%10;
        k=k/10;
        if(d==m || d==n)
        return 0;
    }
    return 1;
    }
int main(){
    int m,n,a,p=0;
    scanf("%d %d", &m,&n);
    scanf("%d", &a);
    for(int i = 0; i<a;){
        p++;
        if(check(m,n,p)==1)
        i++;
        } 
    printf("%d",p);
    return 0;
}
 