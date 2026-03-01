#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=1;
    int i;
    int a;
    scanf("%d",&a);
    for(i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(a!=arr[i])
        {
            sum++;
            a=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}
