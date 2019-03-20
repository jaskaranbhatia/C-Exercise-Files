#include<stdio.h>
#define pie 3.14

int main(void){
    float r,area;
    printf("Enter Radius of the Circle : ");
    scanf("%f",&r);
    area=pie*r*r;
    printf("Area is %f",area);
}
