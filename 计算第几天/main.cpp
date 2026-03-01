#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[256][256];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[16]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int num=a[i][j];
            b[num]++;
        }
    }
    for(int i=0;i<16;i++){
            if(b[i]>0){
        printf("%d %d\n",i,b[i]);
    }}
    return 0;
}
