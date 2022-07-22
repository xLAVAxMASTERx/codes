#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&k);
    while(k>0)
    {
        for(int j=0;j<(n/2);j++)
        {
            array[j]=array[n-j-1]+array[j];
        }
        k--;
        if(n%2!=0) {n=n/2+1;}
        else { n=n/2; }
    }
    for(int k=0;k<n;k++) { printf("%d ",array[k]); }

    return 0;}