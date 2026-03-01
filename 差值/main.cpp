#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    int temp=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n-1;j++)
    {
        for(int k=0;k<n-1-j;k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp=arr[k+1];
                arr[k+1]=arr[k];
                arr[k]=temp;
            }
        }
    }
    int a=arr[n-1];
    for(int l=0;l<n;l++)
    {
        if((abs(arr[l+1]-arr[l]))<a)
        {
            a=abs(arr[l+1]-arr[l]);
        }
    }
    printf("%d",a);
    return 0;
}
