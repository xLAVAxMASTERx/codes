#include <stdio.h>
int colour(int a){
    int k;
  if(a==555)
    return 1 ;
  else
    scanf("%d",&k);
  
  return  a* colour(k);
}
int main(){
  int a,b,c;
  printf("Enter number");
  scanf("%d",&a);
  c=colour(a);
  int k= c%3;
  if(k==1)
    printf("Blue");
  if(k==2)
    printf("Green");
  if(k==0)
    printf("ORange");
}