#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100000001];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    printf("%d",arr[2]);
    return 0;
}
