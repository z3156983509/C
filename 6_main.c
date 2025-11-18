//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr=NULL;
 arr=(int *)malloc(5*sizeof(int));
 for(int i=0;i<5;i++){
    scanf("%d",arr+i);
 }
 for(int i=0;i<5;i++){
    if(i<4){
    printf("%d ",*(arr+i));
    }
else printf("%d\n",*(arr+i));
 }
 free(arr);
}
