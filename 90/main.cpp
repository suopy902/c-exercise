#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n/100;
    b=(n-a*100)/10;
    c=(n-a*100-b*10)/1;
    d=a+b+c;
    printf("%d\n",d);
    return 0;
}
