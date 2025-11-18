//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
void move(int*ptr_arr,int len){
for(int i=len-1;i>0;i--){
    *(ptr_arr+i)=*(ptr_arr+i-1);
}
 *(ptr_arr+0)=0;
}

 int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int *a=&arr[0];
    move(a,5);
    for(int i=0;i<5;i++){
        if(i<4){
            printf("%d ",arr[i]);
        }
        else
        printf("%d",arr[i]);
    }

    return 0;
}
