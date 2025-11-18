//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main(){
    int a=0;
    scanf("%d",&a);
    int *ptr=&a;
    *ptr+=10;
    printf("%d,",a);
    printf("%d",*ptr);
return 0;
}
