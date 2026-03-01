#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int pi,sum=0;
    int l1=0,l2=0,l3=0,l4=0,l5=0,l6=0;
    for(int i=0;i<n;i++){
        scanf("%d",&pi);
        sum+=pi;
    if(pi>=0&&pi<=50){
        l1++;
    }
    else if(pi>=51&&pi<=100){
        l2++;
    }
    else if(pi>=101&&pi<=150){
        l3++;
    }
    else if(pi>=151&&pi<=200){
        l4++;
    }
    else if(pi>=201&&pi<=300){
        l5++;
    }
    else{
        l6++;
    }
    }
    double av=(double)sum/n;
    printf("%.2f\n",av);
    printf("%d %d %d %d %d %d",l1,l2,l3,l4,l5,l6);
    return 0;
}
