#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int n;
    scanf("%d",&n);
    for(a=1;a<=9;a++){
        for(b=0;b<=9;b++){
            for(c=0;c<=9;c++){
                int abc=a*100+b*10+c;
                int cba=c*100+b*10+a;
                if(cba+abc==n){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}
