#include<stdio.h>
#include<math.h>

int main(void){
    int T,i,j;
    double a,b,c,s,area;
    scanf("%f",&T);
    double arr[T];
    for(i=1;i<=T;i++){
        scanf("%f %f %f",&a,&b,&c);
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        arr[i-1]=area;
    }
    for(j=0;j<T;j++){
        printf("%.4f\n",arr[j]);
    }
}
