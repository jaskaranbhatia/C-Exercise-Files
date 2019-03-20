#include<stdio.h>

int main(void){
    int i,j,n;
    printf("Enter No of elements in Array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("The reverse of the Array is : \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
