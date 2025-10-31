//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=0;
    for(int i=0;i<5;i++)
    {
      printf("%d",arr[i]);
      if(i<4)
      {
        printf(" ");
      }
    }
    return 0;
}
