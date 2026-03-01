#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int height[1000],weight[1000],id[1000];
    for(int i=0;i<n;i++){
        scanf("%d",height[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",weight[i]);
    }
    for(int i=0;i<n;i++){
        id[i]=i+1;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            id1=id[j];
            id2=id[j+1];
            int needswap=0;
            if(height[id1]>height[id2]){
                needswap=1;
            }else if(height[id1]==height[id2]{
            if(weight[id1]>weight[id2]){
                needswap=1;
            }else if(weight[id1]==2eight[id2]{
                     if(id[id1]>id[id2])
                        {
                            needswap=1;
                        }
                     }
        }
    }
    return 0;
}
