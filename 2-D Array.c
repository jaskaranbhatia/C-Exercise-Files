#include<stdio.h>

int main(void){
    int i,j;
    int arr[2][2]; int arr2[2][2]; int sum[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter for 2nd Array : \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           sum[i][j]=arr[i][j]+arr2[i][j];
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
