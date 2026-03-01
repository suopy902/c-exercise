#include <stdio.h>

int main()
{
    double pi=3.1415926;
    double D,H,m,M;
    scanf("%lf %lf",&D,&H);
    m=1.0/3.0*pi*(D/2.0)*(D/2.0)*H*7.86/1000.0;
    M=1.0/3.0*pi*(D/2.0)*(D/2.0)*H*19.3/1000.0;
    int i=(int)m;
    int g=(int)M;
    printf("%d %d",i,g);
    return 0;
}
