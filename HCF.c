#include<stdio.h>

int main(){
int min,a,i,b,hcf;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
if(a>b){
    min=b;
}
else{
    min=a;
for(i=1;i<=min;i++){
    if((a%i==0)&&(b%i==0)){
        hcf=i;
    }
}
printf("HCF = %d",hcf);
return 0;
}
}
