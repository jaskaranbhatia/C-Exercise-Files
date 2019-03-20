#include<stdio.h>

int main(void){
    int i,*ptr,n;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}
