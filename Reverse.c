#include<stdio.h>

int main(){
int n1,rem,rev=0,n;
printf("Enter A Number : ");
scanf("%d",&n);
n1=n;
while(n>0){
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
}
if(n1==rev){
    printf("It's a Palindrome");
    printf("\n%d",rev);
}
else{
    printf("Not a Palindrome");
    printf("\n%d",rev);
}
return 0;
}
