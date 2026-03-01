#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    while((scanf("%d",&num)==1)&&(num!=0))
    {
        if(num%2!=0)
        {
            sum+=num;
        }
    }
    printf("%d",sum);
    return 0;
}
