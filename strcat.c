#include<stdio.h>
#include<string.h>

int main(void){
    char a[100],b[100],c[100];
    scanf("%s",a);
    scanf("%s",b);
    int i,j;
    int l1=strlen(a);
    int l2=strlen(b);
    for(i=0;i<l1;i++){
        c[i]=a[i];
    }
    for(i=l1,j=0;j<l2;i++,j++){
        c[i]=b[j];
    }
    c[i+1]='\0';
    printf("New String is : %s",c);
}
