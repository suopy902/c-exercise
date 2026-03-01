#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(char a='a';a<='z';a++){
        printf("%c ",a);
    }
    printf("\n");
    for(char b='z';b>='a';b--){
        printf("%c ",b);
    }
    return 0;
}
