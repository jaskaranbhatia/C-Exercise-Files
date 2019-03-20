#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[50];
    int MAX_LEN=sizeof(s);
    char sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
