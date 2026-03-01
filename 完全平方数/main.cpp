#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int found=0;
    if(n==0){
        printf("0\n");
        return 0;
    }
    for(m=1;m*m<=n;m++){
        if(n==m*m){
            found=1;
            break;
        }
        }
    if(found){
        printf("%d\n",m);
    }
    else{
        printf("no\n");
    }
    return 0;
}
