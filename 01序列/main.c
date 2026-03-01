#include <stdio.h>
#include <stdlib.h>
#define M 100
#define N 100
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[M][N];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[M][N]);
        }
    }
    for(int i=0;i<m;i++){
       int start=-1,end=-1;
       int current_start=-1;
       int max_len=0;
       for(int j=0;j<n;j++){
       if(a[i][j]==1){
        if(current_start=-1){
            current_start=j;
        }
       }else{
       if(current_start!=-1){
        int len=j-current_start;
        if(len>max_len){
            max_len=len;
            start=current_start;
            end=j-1;
        }
        current_start=-1;
       }
       }
       }
       if(current_start!=-1){
        int len=n-current_start;
        if(len>max_len){
            max_len=len;
            start=current_start;
            end=n-1;
        }
       }
       if(start==-1){
        printf("-1 -1\n");
       }
       else{
        printf("%d %d\n",start,end);
       }
    }
    return 0;
}
