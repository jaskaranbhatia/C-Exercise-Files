#include<stdio.h>
#include<math.h>

int main(void){
int n,n1,n2,rem,arm=0,count=0;
scanf("%d",&n);
n1=n;
n2=n;
while(n>0){
    n/=10;
    count++;
}
while(n1>0){
    rem=n1%10;
    arm+=pow(rem,count);
    n1/=10;
}
printf("%d\n",arm);
if(arm==n2){
    printf("It's An Armstrong Number");
}
else{
    printf("It's Not An Armstrong Number");
}
}
