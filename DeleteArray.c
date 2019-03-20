#include<stdio.h>

int main(){
    int n,i,index;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index of element to be deleted : ");
    scanf("%d",&index);
    arr[index]=NULL;
    for(i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("New Array is : ");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
}
