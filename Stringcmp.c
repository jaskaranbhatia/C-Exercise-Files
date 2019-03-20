#include<stdio.h>
#include<string.h>

int main(void){
    char s1[100];
    char s2[100];
    printf("Enter String1 : ");
    scanf("%s",s1);
    printf("Enter String2 : ");
    scanf("%s",s2);
    if(strcmp(s1,s2)==0){
        printf("Both are same");
    }
    else{
        printf("Both are different");
    }
}
