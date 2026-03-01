#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int temp;
    int n=4;
    scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    printf("%d %d %d %d",arr[0],arr[1],arr[2],arr[3]);
    return 0;
}
