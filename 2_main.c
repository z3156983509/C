//202510302105
//315698359@qq.com
//周娜
#include<stdio.h>
int main(){
    int arr[5];
    int*ptr=arr;
   for(int i=0;i<5;i++){
    scanf("%d",ptr+i);
   }
   for(int i=0;i<5;i++){
    *(ptr+i)*=2;
   }
   for(int i=0;i<5;i++){
    if(i!=5){
        printf("%d ",arr[i]);
    }
    else
     printf("%d",arr[i]);
   }
   return 0;
}
