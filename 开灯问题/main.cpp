#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[101]={0};
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(j%i==0){
                arr[j]=1-arr[j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==1){
            printf("%d ",i);
        }
    }
    return 0;
}
