#include<stdio.h>
#include<math.h>

int main(){
int n,n1,n2,count=0,arm=0,rem;
scanf("%d",&n);
n1=n;
n2=n;
while(n>0){
    n=n/10;
    count++;
}
while(n1>0){
    rem=n1%10;
    arm=arm+pow(rem,count);
    n1/=10;
}
if(arm==n2){
    printf("It's an Armstrong Number");
}
else{
    printf("It's not An Armstrong Number");
}
return 0;
}
