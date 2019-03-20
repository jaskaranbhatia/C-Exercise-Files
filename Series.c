#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int i=2,x=1;
    int b=0;
    int a=2;
    printf("%d ",b);
    printf("%d ",a);
    while(i<=n-1){
        if(i%2==0){
            a+=x;
            x+=2;
        }
        else{
            a+=2;
        }
        printf("%d ",a);
        i++;
    }
}
