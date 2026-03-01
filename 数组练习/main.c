#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*@char name[100];
    fgets(name,100,stdin);
    printf("%s",name);*/
    /*char str[]="hello world",srt[100];
    int i=0;
    /*while(str[i]!='\0')
    {
        srt[i]=str[i];
        i++;
    }*/
    //while ((srt[i]=str[i])!='\0') ++i;
    //printf("%s",srt);
    int n=0;
    int base=10;
    char arr[]="12345";
    for(int i=0;i<5;i++)
    {
        n=base*n+(arr[i]-'0');
    }
    printf("%d",n);
    return 0;
}
