//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int sumarray(int arr[],int b)
{
    int sum=0;
    for(int i=0;i<b;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int productarray(int arr[],int c)
{
    int product=1;
    for (int i=0;i<c;i++)
    {
        product*=arr[i];
    }
    return product;
}
int main()
{
    int arr[5];
for(int i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
int sum=sumarray(arr,5);
int product=productarray(arr,5);
printf("%d %d",sum,product);
return 0;
}
