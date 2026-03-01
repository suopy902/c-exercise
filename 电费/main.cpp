#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    double s;
    scanf("%lf",&n);
    if(n>=0&&n<=110){
        s=n*0.5;    }
    else if(n>110&&n<=210){
        s=110*0.5+(n-110)*0.55;
    }
    else if(n>210){
        s=110*0.5+100*0.55+(n-210)*0.70;
    }
    printf("%.2f\n",s);
    return 0;
}
