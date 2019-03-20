#include<stdio.h>
#include<string.h>

int main(){
    char s[100],sub[100];
    int position, length, c = 0;
    printf("Input a string\n");
    gets(s);
    printf("Enter the position and length of substring\n");
    scanf("%d%d", &position, &length);
    while (c < length) {
      sub[c] = s[position+c-1];
      c++;
    }
    sub[c] = '\0';
    printf("Required substring is \"%s\"\n", sub);
    return 0;
}

