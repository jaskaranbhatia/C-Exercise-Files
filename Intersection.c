#include<stdio.h>

int main(void){
    int arr[4]={5,1,6,8};
    int arr2[6]={2,1,7,8,9,0};
    int arr3[10];
    int i,j,num=0;
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            if(arr[i]==arr2[j]){
                    arr3[num]=arr[i];
                    num++;
            }
        }
    }
    for(i=0;i<num;i++){
        printf("%d ",arr3[i]);
    }
}

