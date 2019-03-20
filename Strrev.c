#include<stdio.h>
#include<string.h>

int main(void){
    char s1[100],s2[100]; int i,j;
    printf("Enter A String : ");
    gets(s1);
    int l=strlen(s1);
    for(i=l-1,j=0;i>=0;i--,j++){
        s2[i]=s1[j];
    }
    s2[l]='\0';
    printf("Reverse is : %s\n",s2);
    if(strcmp(s1,s2)==0){
        printf("It's a Palindrome");
    }
    else{
        printf("It's not a Palindrome");
    }
}
