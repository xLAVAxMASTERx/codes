#include<stdio.h>
int main(){
    int n ,i,m=0;double s=0.0,k;
    scanf("%d",&n);
    double arr[n];
    scanf("%lf",&k);
    for(i=0;i<n;i=i+1)
      scanf("%lf",&arr[i]);
    for(i=0;i<n;i=i+1)  
      s=s+arr[i];
    s=s/n;
    printf("%lf\n",s);
    for(i=0;i<n;i=i+1)  
    {
        if(arr[i]>k)
        m=m+1;
    }
    printf("%d",m);
}