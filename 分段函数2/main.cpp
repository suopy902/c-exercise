#include <stdio.h>
#include <stdlib.h>
int f(int x)
{
    if(x<1){
        return x;
    }
    if(x>=1&&x<10){
        return 2*x-1;
    }
    if(x>=10){
        return 3*x-11;
    }
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=f(n);
    printf("%d\n",m);
    return 0;
}
