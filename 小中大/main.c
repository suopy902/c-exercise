#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[10000];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max,min;
    //a[0]>a[n]?(max=a[0],min=a[n]):(min=a[0],max=a[n]);
    if(a[0]>a[n-1]){
        max=a[0];
        min=a[n-1];
    }
    else{
        max=a[n-1];
        min=a[0];
    }
    int mid;
    if(n%2==0){
        mid=(a[n/2-1]+a[(n)/2])/2.0;
    }
    else{
        mid=(a[(n)/2]);
    }
    printf("%d %d %d",max,mid,min);
    return 0;
}
