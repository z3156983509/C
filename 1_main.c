//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main()
{ int i=0;
 int x,y,z;
 for (i=100;i<1000;i++)
{
x=i/100;
y=(i/10)%10;
z=i%10;
if(i==x*x*x+y*y*y+z*z*z)
{
    printf ("%d ",i);
}
}
    return 0;
}
