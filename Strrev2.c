#include<stdio.h>
#include<string.h>

int main(void){
    char s[40];
    scanf("%[^\n]s",s);
    int i,j;
    i=0;
    j=strlen(s)-1;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    printf("The reverse of String is : %s",s);
}
