#include<stdio.h>

typedef struct{
    char name[50];
    int rollno;
}stu;

int main(void){
    stu s[5];
    for(int i=0;i<2;i++){
    printf("Enter name : ");
    scanf("%s",s[i].name);
    printf("Enter Rollno : ");
    scanf("%d",&s[i].rollno);
    }
    for(int i=0;i<2;i++){
    printf("Name : %s\n",s[i].name);
    printf("RollNo : %d\n",s[i].rollno);
    }
}
