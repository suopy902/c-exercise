#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double j(int n){
    double re=1;
    for(int i=1;i<=n;i++)
        re*=i;
    return re;
}
int main()
{
    int n;
    double x;
    scanf("%d %lf",&n,&x);
    double sum=0.0;
    for(int i=0;i<n;i++){
        double y=pow(-1,i)*pow(x,2*i+1)/j(2*i+1);
        sum+=y;
    }
    printf("%.4f\n",sum);
    return 0;
}
