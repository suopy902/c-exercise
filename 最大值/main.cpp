#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,max;
    scanf("%lf %lf %lf",&a,&b,&c);
    max=a>b?a:b;
    max=max>c?max:c;
    printf("%.0f\n",max);
    return 0;
}
