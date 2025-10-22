//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("请输入三条线段长：");
    scanf("%d %d %d",&a,&b,&c);
if((a+b>c)&&(a+c>b)&&(b+c>a))
{
    printf("可以组成三角形");
}
else
{
    printf("不能组成三角形");
}
return 0;
}
