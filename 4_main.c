//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main()
{ int x,y,z;
int i=100;
while(i<999&&i>=100)
{
i++;
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
