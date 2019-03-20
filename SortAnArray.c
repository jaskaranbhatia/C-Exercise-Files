#include<stdio.h>

int main(void){
    int n,i,j,k,l,a;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++){
            if(arr[j]>arr[k]){
               a=arr[j];
               arr[j]=arr[k];
               arr[k]=a;
            }
        }
    }
    printf("The new array is : ");
    for(l=0;l<n;l++){
        printf("%d\t",arr[l]);
    }
}
