#include<stdio.h>

int main(void){
    int i,j,n;
    printf("Enter no. of elements of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf("The new Array is : \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
