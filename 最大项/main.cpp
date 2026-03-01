#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int e,f,g;
    e=a>b?a:b;
    f=c>d?c:d;
    g=e>f?e:f;
    printf("%d\n",g);
    return 0;
}
