#include <stdio.h>
int main(){
    int a,s=0;
    scanf("%d",&a);
    int arr[a];
    int b;
    for (int i = 0; i < a; i++)
    {
         scanf("%d",&arr[i]);

    }

    for (int i = 0; i < a; i++)
    {
        int temp;
        for (int j = i+1; j < a; j++)
        {
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
 

        }

    }
 
 
 
for (int i = 0; i < a; i++)
{
  while(i<a-1 && arr[i]==arr[i+1]){
    i++;
  }
  s=s+arr[i];
 
}
printf("%d",s);
 



}