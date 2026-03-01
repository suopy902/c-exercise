#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a*a;
    int d=b*b;
    if(a>b){
        printf("%d %d",a%10,d);
    }
    else if(b>a){
        printf("%d %d",b%10,c);
    }
    return 0;
}
