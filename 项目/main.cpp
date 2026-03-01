#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,b;
    double c,t,s;
    scanf("%d %d",&a,&b);
    c=a+sqrt(b*a+1);
    t=a*(c+b)*(c+b);
    s=t*c+b*b;
    int C=(int)c;
    int T=(int)t;
    int S=(int)s;
    printf("CL=%d tD=%d SP=%d\n",C,T,S);
    return 0;
}
