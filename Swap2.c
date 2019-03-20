#include<stdio.h>

int main(void){
int a,b;
scanf("%d",&a);
scanf("%d",&b);
a=a-b;
b=a+b;
a=b-a;
printf("Value of a is : %d\n",a);
printf("Value of b is : %d",b);
}
