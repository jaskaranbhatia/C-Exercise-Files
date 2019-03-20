#include<stdio.h>
#include<string.h>

int main(){
    char s[100]; int count=0;
    printf("Enter A String : ");
    scanf("%[^\n]s",s);
    int i=0;
    while(s[i]!='\0'){
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')){
            count++;
        }
        i++;
    }
    printf("The no. of vowels are %d",count);
    return 0;
}
