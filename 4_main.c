//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
void add(int *a)
{
    for(int i=0;i<5;i++){
        *(a+i)+=1;
    }
}
int main(){
int arr[5];
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
int *p=&arr[0];
add(p);
for(int i=0;i<5;i++){
    if(i!=4){
    printf("%d ",arr[i]);
    }
    else
    printf("%d",arr[i]);
}
    return 0;
}
