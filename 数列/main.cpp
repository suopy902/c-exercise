#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,c,sum=1;
    scanf("%d",&c);
    for(int i=1;i<n;i++){
        scanf("%d",&a);
        if(c!=a){
            sum++;
            c=a;}

    }
    printf("%d\n",sum);
    return 0;
}
