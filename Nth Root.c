#include<stdio.h>
#include<math.h>

int main(void){
float n,x,ans;
printf("Enter A Number : ");
scanf("%f",&x);
printf("Enter the Nth Root : ");
scanf("%f",&n);
ans=pow(x,(1/n));
printf("The Answer Is : %.2f",ans);
}
