//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num1=0;
    int num2=0;
    scanf("%d %d",&num1,&num2);
    int *a=&num1;
    int *b=&num2;
    swap(a,b);
    printf("%d %d",num1,num2);
    return 0;

}
