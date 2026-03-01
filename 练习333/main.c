#include <stdio.h>
#include <stdlib.h>
int min(int a[],int n)
{
    int i,fi=0;
    for(i=0;i<n;i++){
        if(a[i]<a[fi]){
            fi=i;
        }
    }
    return fi;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[101][101];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int count=0;
    int found=0;
    int row;
    int k;
    for(int i=0;i<m;i++){
            row=min(a[i],n);
            int is=1;
            for(k=0;k<m;k++){
                if(a[k][row]>a[i][row]){
                    is=0;
                     break;
                }
            }
            if(is){
                printf("%d %d %d",i,row,a[i][row]);
                found=1;
            }
            }
    if(!found){
        printf("no\n");
    }
    return 0;
}
