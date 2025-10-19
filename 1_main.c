//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main()
{  float temperatureC,tempertureF;
    printf("Please input the temperature in Celsius.\n");
    scanf("%f",& temperatureC);
    tempertureF=temperatureC*1.8+32;
    printf("%f inCelsius is equal to %.1f in Fahrenheit.\n",temperatureC,tempertureF);

    return 0;

}
