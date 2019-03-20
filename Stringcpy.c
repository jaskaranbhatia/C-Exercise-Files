#include<stdio.h>
#include<string.h>

int main(){
    char s1[100],s2[100];
    gets(s1);
    int l=strlen(s1);
    int c=0;
    while(c<l){
        s2[c]=s1[c];
        c++;
    }
    s2[c]='\0';
    printf("Copied String is : %s",s2);
    return 0;
}
