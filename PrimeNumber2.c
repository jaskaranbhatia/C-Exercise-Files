/*Prime Number from 1 to N */
#include<stdio.h>

int main(void){
    int i,j,N;
    printf("Enter value of N : ");
    scanf("%d",&N);
    for(i=2;i<=N;i++){
        int flag=1;
        for(j=2;j<=i-1;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d ",i);
        }
    }
}
