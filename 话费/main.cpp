#include <stdio.h>
#include <stdlib.h>

int main()
{
    double t,A,B;
    scanf("%lf",&t);
    A=0.6*t;
    B=50+0.4*t;
    printf("%.2f\n%.2f\n",A,B);
    if(A>=B)
        printf("B\n");
    else if(A<B)
        printf("A\n");
    return 0;
}
