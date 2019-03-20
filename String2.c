#include<stdio.h>

int main(void){
    char ch[100];
    printf("Enter your name please : ");
    scanf("%[^\n]s",ch);
    printf("Your name is %s",ch);
}
