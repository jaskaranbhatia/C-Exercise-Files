#include<stdio.h>

int main(void){
    int i,j,l,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(k=5;k>=1;k--){
        for(l=1;l<=k;l++){
            printf("* ");
        }
        printf("\n");
    }
}
