//202510302105
//315698359@qq.com
//周娜
#include<stdio.h>
int main(void)
{
int grade=0;
int score;
    printf("请输入你的成绩(0-100):");
    scanf("%d",&grade);
if(score>=90&&score<=100)
{
    printf("grade=A");
}
else if(score>=80&&score<90)
{
    printf("grade=B");
}
else if(score>=70&&score<80)
{
    printf("grade=C");
}
else if(score>=60&&score<70)
{
    printf("grade=D");
}
else
{
    printf("grade=E");
}

}
