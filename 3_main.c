//202521051030
//3156983509@qq.com
//周娜
#include<stdio.h>
int main(void)
{
int a,b;
char op;
scanf("%d %d %c",&a,&b,&op);
switch(op)
{
   case '+':
   printf("%d\n",a+b);
   break;
   case'-':
   printf("%d\n",a-b);
   break;
   case'*':
   printf("%d\n",a*b);
   break;
   case'/':
   if(b!=0)
   {
    printf("%.1f\n",a*1.0/b);
   }
   else{
    printf("除数不能为0\n");
   }
   break;
   default:
   printf("无效运算符\n");
   break;

}
 return 0;

}
