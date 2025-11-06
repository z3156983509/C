//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
void function(int arr[],int size)
{
    int temp=0;
    for(int i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
int main()
{
    int arr[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    function(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
        if(i<4){
            printf(" ");
        }
    }
    return 0;
}
