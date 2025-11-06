//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
double APS(double a1,double an,double step)
{
    int n=(an-a1)/step+1;
    double sum=(a1+an)/2*n;
    return sum;
}
int main()
{
double result=APS(1,100,1);
printf("%.0f\n",result);
return 0;
}
