#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char n[51];
    scanf("%s",n);
    int len=strlen(n);
    char result[101]={0};
    int pos=0;
    for(int i=0;i<len;){
        char c=n[i];
        i++;
        int count =1;
        if(i<len && n[i]>='0' && n[i]<='9'){
            count =n[i]-'0';
            while(i<len && n[i]>='0' && n[i]<='9'){
                count=count*10+(n[i]-'0');
                i++;
            }
        }
        for(int j=0;j<count;j++){
            result[pos++]=c;
        }
    }
    printf("%s\n",result);
    return 0;
}
