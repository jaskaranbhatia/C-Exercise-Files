#include<stdio.h>
#include<math.h>

int main(void){
float p,r,t,a;
scanf("%f%f%f",&p,&r,&t);
a=p*pow((1+r/100),t)
printf("The new amount is : %d",a);
}
