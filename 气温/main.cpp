#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int m;
    int max=0;
    scanf("%d",&m);
    for(int i=1;i<n;i++){
        scanf("%d",&temp);
        int diff=abs(m-temp);
        if(diff>max){
            max=diff;
        }
        m=temp;
    }
    printf("%d\n",max);
    return 0;
}
