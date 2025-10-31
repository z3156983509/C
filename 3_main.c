//202521051030
//3156983509@qq.com
//周娜
#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个数:");
    scanf("%d",&n);
    int i;
    int isPrime=1;
 while(i<n)
    {
        i++;
        if (n%i==0)
        {
        isPrime=0;
        break;
        }
    }
    if(isPrime==1)
    {
    printf("密钥安全，密码设置成功\n");
    }
    else
    {
        printf("密钥不安全，请重新输入\n");
    }
return 0;
}
