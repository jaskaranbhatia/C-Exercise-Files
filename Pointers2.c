#include<stdio.h>

int main(){
int j;
int k=40;
int *q=&k;
scanf("%d",&j);
int *p=NULL;
p=&j;
printf("The address of the j variable is :- %x\n",p);
printf("The value of the j variable is :- %d\n",*p);
printf("The address of the k variable is :- %x\n",q);
return 0;
}
