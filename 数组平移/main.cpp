#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int p;
    scanf("%d",&p);
    int arr[10];
    for(int i=0;i<p+1;i++){
        arr[9-p+i]=array[i];}
    for(int i=0;i<9-p;i++){
        arr[i]=array[p+1+i];
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
