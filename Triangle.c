#include<stdio.h>
#include <math.h>

int main(void){
    int T,i,a,b,c,j,s,area;
    scanf("%d",&T);
    int arr[T];
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&a,&b,&c);
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        arr[i-1]=area;
    }
    for(j=0;j<T;j++){
        printf("%d\n",arr[j]);
    }
}
