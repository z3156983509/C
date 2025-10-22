//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main(void)
{  
    float celsius, fahrenheit;
    printf("Please input the temperature in Celsius:");
    scanf("%f",&celsius);
    fahrenheit=celsius*1.8+32;
    printf("fahrenheit:%.1f\n",fahrenheit);

    return 0;
}
