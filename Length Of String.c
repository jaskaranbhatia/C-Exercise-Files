#include<stdio.h>
#include<string.h>

int main(){
    char s[20];
    scanf("%[^\n]s",s);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    printf("Length is %d",i);
}
