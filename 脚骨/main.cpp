#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=0;
    scanf("%d",&n);
    while (n>1){
        if(n%2==0){
            n=n/2;
        }
        else if(n%2!=0){
            n=3*n+1;
        }
    i++;
    }
    printf("%d",i);
    return 0;
}
