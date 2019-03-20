#include<stdio.h>

int main(void){
    int x=0,y=1,z,i;
    printf("%d\t",x);
    printf("%d\t",y);
    for(i=1;i<=12;i++){
        z=x+y;
        x=y;
        y=z;
        printf("%d\t",z);
    }
}
