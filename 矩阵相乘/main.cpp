#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][3],B[3][2],C[2][2]={0};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                for(int k=0;k<3;k++){
                    C[i][j]+=A[i][k]*B[k][j];
                }
        }
        }
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d",C[i][j]);
        if(j<1){
            printf(" ");
        }

    }
    printf("\n");
    }
    return 0;
}
