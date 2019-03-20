#include<stdio.h>

int main(){
    int a,b,max;
    printf("Enter the numbers : ");
    scanf("%d%d",&a,&b);
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    while(1){
        if(max%a==0 && max%b==0 )
        {
            printf("The LCM of %d and %d is %d.",a,b,max);
            break;
        }
        max++;
        }
    return 0;
}
