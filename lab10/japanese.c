#include<stdio.h>
#include<math.h>
int main(){
    int x = 0, n = 0,d =0;
    scanf("%d",&x);
    scanf("%d",&n);
    int a = 5*x;
    int b = 5;
    for (int i = 0; i < n; i++)
    {
        if (a >= b)
        {
            a = a-b;
            b = b+10;
        }
        else{
            a = a*100;
            d = b%10;
            b = b/10;
            b = b*100;
            b = b+d;
        }
        printf("<%d , %d>    ", a,b);
    }
   float p = sqrt(x);
   printf("%f",p);
}