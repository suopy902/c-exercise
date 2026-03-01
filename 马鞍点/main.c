#include <stdio.h>
#include <stdlib.h>
#define M 100
#define N 100
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[M][N];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[m-1][n-1]);
        }
    }
    int found=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                int pai=1;
            for(int k=0;k<n;k++){
                if(arr[i][k]<arr[i][j]){
                    pai=0;
                    break;
                }
                if(!pai) continue;
            }
            int lie=1;
        for(int k=0;k<m;k++){
            if(arr[k][j]>arr[i][j]){
                lie=0;
                break;
            }
            if(lie){
                printf("%d %d %d\n",i,j,arr[i][j]);
                found=1;
            }
        }
        }
    }
    if(!found){
        printf("no\n");
    }
    return 0;
}
