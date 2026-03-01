#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[101];
    int i;
    int o[101];
    int j[101];
    int p=0;
    int J=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            o[p++]=arr[i];
        }
        else
        {
            j[J++]=arr[i];
        }
    }
    int temp1,temp2;
    for(int f=0;f<p-1;f++)
    {
        for(int k=0;k<p-1-f;k++)
        {
            if(o[k+1]>o[k])
            {
                temp1=o[k];
                o[k]=o[k+1];
                o[k+1]=temp1;
            }
        }
    }
    for(int h=0;h<J-1;h++)
    {
        for(int l=0;l<J-1-h;l++)
        {
            if(j[l+1]>j[l])
            {
                temp2=j[l];
                j[l]=j[l+1];
                j[l+1]=temp2;
            }
        }
    }
    for (int f = 0; f < p; f++) {
        printf("%d ", o[f]);
    }
    for (int h = 0; h < J; h++) {
        printf("%d ", j[h]);
    }
    printf("\n");
    return 0;
}
