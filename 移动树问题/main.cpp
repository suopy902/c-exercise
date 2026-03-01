#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,m;
    scanf("%d %d",&l,&m);
    int a[10001]={0};
    int count=0;
    int start,end;
    for(int i=0;i<m;i++){
        scanf("%d %d",&start,&end);
    if(start>end){
        int temp=start;
        start=end;
        end=temp;
    }
    for(int i=start;i<=end;i++){
        a[i]=1;
    }
    }
    for(int i=0;i<=l;i++){
        if(a[i]==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
