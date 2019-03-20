#include<stdio.h>

int main(void){
    int n;
    printf("Enter no of Array Elements : ");
    scanf("%d",&n);
    int arr[n]; int i,first,last,middle,num;
    printf("Enter The Array Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be searched : ");
    scanf("%d",&num);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last){
        if(arr[middle]<num){
            first=middle+1;
        }
        else if(arr[middle]==num){
            printf("The number is at %d",middle+1);
            break;
        }
        else{
            last=middle-1;
        }
        middle=(first+last)/2;
    }
        if(first>last){
            printf("Element not found");
        }
    }
