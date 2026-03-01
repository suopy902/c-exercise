#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    return n<=3?n:f(n-1)+f(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    m=f(n);
    printf("%d",m);
    return 0;
}
