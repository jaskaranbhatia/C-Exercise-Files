#include<stdio.h>

int main(){
    printf("Enter The Elements of the Array --->");
    int i; int arr[10];
    int num;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched : ");
    scanf("%d",&num);
    for(i=0;i<=10;i++){
        if(arr[i]==num){
            printf("It's present at %d",i);
            break;
        }
        if(i==10){
            printf("It's not present");
        }
    }
}
