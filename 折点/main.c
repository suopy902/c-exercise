#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sales[100];
    for(int i=0;i<n;i++){
        scanf("%d",&sales[i]);
    }
    int count=0;
    for(int i=1;i<n-1;i++){
    if((sales[i]>sales[i-1]&&sales[i]>sales[i+1])||(sales[i]<sales[i-1]&&sales[i]<sales[i+1])){
        count++;
    }
    }
    printf("%d\n",count);
    return 0;
}
