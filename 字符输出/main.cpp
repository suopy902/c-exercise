#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    scanf("%c",&n);
    if(n>='a'&&n<='z'){
        printf("%c",n-32);
    }
    else if(n>='A'&&n<='Z'){
        printf("%c",n+32);
    }
    else{
        printf("%c",n);
    }
    return 0;
}
