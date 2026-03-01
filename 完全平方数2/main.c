#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    for(int m=1;m*m<n;m++){
        if(m*m==n){
            printf("%d",&m);
        }
        else{
            printf("no");
        }
    }
    return 0;
}
