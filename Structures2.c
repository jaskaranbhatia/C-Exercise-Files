#include <stdio.h>

struct student
{
    char name[50];
    float marks;
} s[3];

int main()
{
    int i;
    printf("Enter information of students:\n");
    for(i=0; i<3; ++i)
    {
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }

    printf("Displaying Information:\n\n");
    for(i=0; i<3; ++i)
    {
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}
