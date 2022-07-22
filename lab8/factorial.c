#include <stdio.h>
int factorialprod(int a){
  if(a/5<5)
    return a/5;
  return a/5 + factorialprod(a/5);
}
int main(){
  int a,b;
  int prod=1;
  scanf("%d",&a);
  for (int i = 0; i <a; i++)
  {
    scanf("%d",&b);
    if(b<5){
      prod=0;
      break;
    }
    else
      prod=prod*factorialprod(b);
 }
   printf("%d",prod);
}