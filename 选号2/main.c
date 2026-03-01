#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[100];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("%d",num[1]);
    return 0;
}
