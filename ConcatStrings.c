#include<stdio.h>
#include<string.h>

int main(){
    char s1[100],s2[100];
    printf("Enter first String : ");
    scanf("%s",s1);
    printf("Enter second String : ");
    scanf("%s",s2);
    strcat(s1,s2);
    printf("New String is : %s",s1);
    return 0;
}
