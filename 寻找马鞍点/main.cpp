#include <stdio.h>
#include <stdlib.h>
#define M 100
#define N 100
int min(int a[],int n)
{
    int i,p=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<a[p]) p=i;}
        return p;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[M][N];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int row,count=0,i,col;
    for(row=0;row<m;row++){
        col=min(a[row],n);
        int is=1;
        for(i=0;i<m;i++)
        {
            if(a[i][col]>a[row][col]){
                is=0;
                break;
            }
            }
            if(is){
                printf("%d %d %d",row,col,a[row][col]);
                count++;
        }
    }
    if(count==0)
    {
        printf("no\n");
    }
    return 0;
}
