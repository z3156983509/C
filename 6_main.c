//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        int num;
        while(1)
        {
        scanf("%d",&num);
        if(num%2==0)
        {
            arr[i]=num;
            break;
        }
    }
  }
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
