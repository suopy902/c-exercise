#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double x)
{
    if(x>=0){
        return sqrt(x);
    }
    if(x<0){
        return pow((x+1),2)+2.0*x+1.0/x;
    }
}
int main()
{
    double n,m;
    scanf("%lf",&n);
    m=f(n);
    printf("%.2f\n",m);
    return 0;
}
