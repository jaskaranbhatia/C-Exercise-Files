#include<stdio.h>

int main(){
int i,j;
for(i=65;i<=74;i++){
    for(j=65;j<=i;j++){
        printf("%c ",j);
    }
    printf("\n");
}
}
