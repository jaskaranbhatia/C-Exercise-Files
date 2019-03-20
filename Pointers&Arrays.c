#include<stdio.h>

int main(){
int arr[5]={1,2,3,4,5};
int i;
int *p=NULL;
p=arr;
printf("Address Of Array = %x\n",p);
for(i=0;i<=4;i++){
    printf("%d ",*(p+i));
}
}
