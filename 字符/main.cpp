#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c,k;
    scanf("%c",&c);
    if(c>='a'&&c<='z'){
        if(c>='x'&&c<='z'){
            k=c+3-26;}
        else{
            k=c+3;}
    }
    else if(c>='A'&&c<='Z'){
        if(c>='A'&&c<='B'){
            k=c-2+26;}
        else{
            k=c-2;}
    }
    else if(c>='0'&&c<='9'){
        k='9'-(c-'0');
    }
    else if(c==' ')
        k='*';
    else
        k='#';
    printf("%c %c\n",c,k);
    return 0;
}
