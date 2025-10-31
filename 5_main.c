//3156983509
//3156983509@qq.com
//周娜
#include<stdio.h>
int main()
{
    int arr[5];
    int sum=0;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    arr[4]=sum;
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
        if(i!=4)
        {
            printf(" ");
        }
    }
    return 0;
}
