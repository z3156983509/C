//202510302105
//3156983509@qq.com
//周娜
#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int *p=&arr[0];
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(*(p+j)>*(p+j+1)){
            int temp=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(i<9){
            printf("%d ",*(p+i));
        }
        else printf("%d",*(p+i));
    }
    return 0;
}
