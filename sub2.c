#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char sub[100];
    char string[100];
    int position,length;
    printf("Please Enter a string : ");
    scanf("%s",string);
    printf("Enter Position And Length\n");
    scanf("%d%d",&position,&length);
    for(i=0;i<length;i++){
        sub[i]=string[position+i-1];
    }
    sub[i]='\0';
    printf("Substring is : ");
    printf("%s",sub);
}
