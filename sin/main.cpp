#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    double sum=0.0;
    while(i<=n){
        double m=sin(1.0/i);
        sum+=m;
        i++;
    }
    printf("%.2f\n",sum);
    return 0;
}
