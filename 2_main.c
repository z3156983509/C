//202510302105
//315698359@qq.com
//周娜
#include<stdio.h>
int main(void)
{
int score;
    printf("请输入你的成绩(0-100):");
    scanf("%d",&score);
if(score>=90&&score<=100)
{
    printf("A");
}
else if(score>=80&&score<90)
{
    printf("B");
}
else if(score>=70&&score<80)
{
    printf("C");
}
else if(score>=60&&score<70)
{
    printf("D");
}
else
{
    printf("E");
}

}
