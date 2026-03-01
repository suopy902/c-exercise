#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    double m,M;
    scanf("%d %d",&x,&y);
    x=x/10/2;
    y=y/10/2;
    m=7.86*4/3*3.1415926*x*x*x;
    M=19.3*4/3*3.1415926*y*y*y;
    printf("%.3f %.3f",m,M);
    return 0;
}
