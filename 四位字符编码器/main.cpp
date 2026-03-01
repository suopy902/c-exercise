#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[4];
    scanf("%s",a);
    for(int i=0;i<4;i++){
        if((a[i]>='A')&&(a[i]<='Z')){
            a[i]=a[i]+32;
        }
        else if((a[i]>='a')&&(a[i]<='z')){
            a[i]=a[i]-32;
        }
        else if((a[i]>='0')&&(a[i]<='9')){
            a[i]='*';
        }
        else{
            a[i]='@';
        }
    }
    for(int i=0;i<4;i++){
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
