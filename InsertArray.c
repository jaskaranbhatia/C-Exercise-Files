#include<stdio.h>

int main(void){
    int n,i,index,value;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index and value of new element-->");
    scanf("%d",&index);
    scanf("%d",&value);
    for(i=n+1;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=value;
    printf("New Array is : ");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}
