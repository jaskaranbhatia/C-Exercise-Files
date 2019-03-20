#include<stdio.h>
#include<string.h>

int main(){
    char s1[100],s2[100];
    printf("Enter first String : ");
    scanf("%s",s1);
    printf("Enter second String : ");
    scanf("%s",s2);
    if(strcmp(s1,s2)==0){
        printf("They are equal");
    }
    else{
        printf("They are not equal");
    }
    return 0;
}
