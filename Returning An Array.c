#include<stdio.h>

int* arr();

int main(void){
    int *a;
    a=arr();
    int k;
    for(k=0;k<5;k++){
        printf("%d ",*
               a+k);
    }
}

int* arr(){
    static int num[5];
    int i;
    int even=0;
    for(i=0;i<5;i++){
        num[i]=even+2;
    }
    return(num);
}
