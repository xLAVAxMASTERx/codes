#include <stdio.h>
void main()
{   int n,i,k=0;
    printf("enter number of inputs");
    scanf("%d",&n);
    int arr [n];
    printf("enter numbers");
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&arr[i]);
        if (arr[i]<0 && arr[i]>50)
        {
           while(arr[i]<0 && arr[i]>50)
           {
            printf("enter numbers between 0 and 50");
            scanf("%d",&arr[i]);
           }
        }
    }
    for(i=0;i<n;i=i+1)
    {
        if(arr[i]>k)
        {
            k=arr[i];
        }

    }
     printf("highest numbers is, %d",k);

    
    
        
}