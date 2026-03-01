#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi=3.1415926;
    double R1,H1,R2,H2,v,m;
    scanf("%lf %lf %lf %lf",&R1,&H1,&R2,&H2);
    v=pi*(R1/2.0)*(R1/2.0)*H1-1.0/3.0*pi*(R2/2.0)*(R2/2.0)*H2;
    m=0.785*v;
    int M=(int)m;
    int V=(int)v;
    printf("%d %d\n",V,M);
    return 0;
}
