#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void*b)
{
    return (*(int *)b-*(int*)a);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int s2=0,s1=0;
    for(int k=0;k<n;k++)
    {
       s1+=arr[k][k];
       s2+=arr[k][n-1-k];
    }
    int a[2*n+2];
    int s=0;
    for(int i=0;i<n;i++)
    {
        int row=0;
        for(int j=0;j<n;j++)
        {
            row+=arr[i][j];
        }
        a[s++]=row;
        }

    for(int j=0;j<n;j++)
    {
        int lie=0;
        for(int i=0;i<n;i++)
        {
            lie+=arr[i][j];
        }
        a[s++]=lie;
        }

        a[s++]=s1;
        a[s++]=s2;
        qsort(a,2*n+2,sizeof(int),compare);
        for(int i=0;i<2*n+2;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    return 0;
}
