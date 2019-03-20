#include<stdio.h>

int main(void){
float sum=0,avg;
int i,n;
printf("Enter The Number Of Students : ");
scanf("%d",&n);
float arr[n];
for(i=1;i<=n;i++){
    scanf("%f",&arr[i]);
    sum=sum+arr[i];
}
avg=sum/n;
printf("Average is : %f",avg);
}
