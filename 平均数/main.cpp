#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int temp;
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        sum+=temp;
    }
    double ave=(double)sum/n;
    printf("%.2f\n",ave);
    return 0;
}
