#include<stdio.h>

int main(void){
    char s[50];
    char s1[50];
    scanf("%[^\n]s",s);
    char *p=s;
    char *m=s1;
    m=p;
    while(*m != '\0'){
        printf("%c",*m);
        m++;
    }
}
