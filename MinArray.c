#include<stdio.h>

int main(void){
    int arr[5]={4,3,6,1,8};
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The minimum of Array is %d",min);
}
