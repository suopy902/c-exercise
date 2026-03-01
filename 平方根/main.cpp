#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double gen(double a){
    double x1,x2;
    if(a==0.0) return 0.0;
    x1=a;
    x2=(x1+a/x1)/2.0;
    while(fabs(x1-x2)>1E-5){
        x1=x2;
        x2=(x1+a/x1)/2.0;
    }
    return x2;
}
int main()
{
    double a;
    scanf("%lf",&a);
    double b=gen(a);
    printf("%.5f\n",b);
    return 0;
}
