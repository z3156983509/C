//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
double power(double a,int b)
{
    double result=1.0;
    int i;
    for (int i=0;i<b;i++)
    {
        result*=a;
    }
    return result;
}
int main()
{
    double sum=0;
    int i;
    for(i=1;i<=5;i++)
    {
        sum+=power(i,2);
    }
    printf("%.0f\n",sum);
    return 0;
}
