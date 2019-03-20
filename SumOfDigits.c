#include<stdio.h>

int main(void){
    int sum=0,n,n1,rem;
    printf("Enter The Number : ");
    scanf("%d",&n1);
    n=n1;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("The sum of digits is : %d",sum);
}
