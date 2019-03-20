#include<stdio.h>

int main(void){
    char str[100]; int i,frequency=0; char ch;
    printf("Enter A String : ");
    gets(str);
    printf("Enter the character : ");
    scanf("%c",&ch);
    for(i=0; str[i]!='\0'; ++i){
        if(ch==str[i]){
            ++frequency;
        }
    }
    printf("Frequency of %c = %d",ch,frequency);
    return 0;
}
