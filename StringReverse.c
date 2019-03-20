#include<stdio.h>
#include<string.h>

int main(void){
    char s[100]; char s1[100];
    printf("Enter a String : ");
    gets(s);
    strcpy(s1,s);
    strrev(s1);
    printf("The reverse of the string is %s",s1);
}
