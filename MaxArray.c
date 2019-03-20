#include<stdio.h>

int main(){
    int n,i,j,max;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(j=1;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("Max Of Array Is :- %d",max);
    return 0;
}
