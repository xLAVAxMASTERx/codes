#include <stdio.h>
double fac(int n,int i){
  if(i==1)
    return 1+(i*i)/fac(n,i+2);
  else if(i>n)
    return 2+(i*i);
  else
      return 2+(i*i)/fac(n,i+2); }
int main(){
  int a;double p;
  printf("Enter number of inputs");
  scanf("%d",&a);
  p=4/fac(a,1);
  printf("%lf",p);}