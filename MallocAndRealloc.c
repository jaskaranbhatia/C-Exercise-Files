#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr; int n1,n2;
    printf("Enter size of the array : ");
    scanf("%d",&n1);
    ptr=(int*)malloc(n1*sizeof(int));
    int i;
    for(i=0;i<n1;i++){
        printf("%u ",ptr+i);
    }
    printf("Enter new size of the array : ");
    scanf("%d",&n2);
    ptr=(int*)realloc(ptr,n2*sizeof(int));
     for(i=0;i<n2;i++){
        printf("%u ",ptr+i);
    }
    printf("Do u want to fuck - >");
    int opt;
    scanf("%d",opt);
    if(opt){
        free(ptr);
        for(i=0;i<n1;i++){
        printf("%u ",ptr+i);
    }
    }
}
