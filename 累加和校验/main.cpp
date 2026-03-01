#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char arr[101];
    scanf("%s",&arr);
    int sum=0;
    int len=strlen(arr);
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    int check=sum%256;
    printf("%d",check);
    return 0;
}
