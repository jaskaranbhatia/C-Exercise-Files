#include<stdio.h>

int sum(int *arr,int size);

int main(void){
    int total;
    int a[5]={2,4,7,9,1};
    total=sum(a,5);
    printf("Sum is : %d",total);
}

int sum(int *arr,int size){
    int sum=0;
    int i;
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
