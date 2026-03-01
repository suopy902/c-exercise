#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[31];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[100000]={0};
    for(int i=0;i<100000;i++){
        int num=a[i];
        b[num]++;
    }
    for(int i=0;i<n;i++){
        if(b[i]>0){
            printf("%d:%d\n",i,b[i]);
        }
    }
    return 0;
}
