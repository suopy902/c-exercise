#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    int len=strlen(a);
    int temp;
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%s",a);
    return 0;
}
