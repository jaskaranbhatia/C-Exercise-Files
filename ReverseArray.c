#include<stdio.h>

int main(void){
    int n,i,j;
    printf("Enter size of an Array : ");
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--){
        arr2[i]=arr[j];
    }
    printf("The reverse of Array is : ");
    for(i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
