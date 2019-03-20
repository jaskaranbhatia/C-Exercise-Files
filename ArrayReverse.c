#include<stdio.h>

int main(void){
int i,n;
int arr[5]={1,2,3,4,5};
n=sizeof(arr)/sizeof(arr[0]);
for(i=n-1;i>=0;i--){
    printf("%d\t",arr[i]);
}
}
