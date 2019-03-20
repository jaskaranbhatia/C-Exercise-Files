#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct Stack{
    int top;
    int arr[MAX];
}s;

void push(){
    if(s.top==MAX-1){
        printf("Stack is Full");
    }
    else{
        int num;
        printf("Enter element to be popped : ");
        scanf("%d",&num);
        s.top++;
        s.arr[s.top]=num;
    }
}

void pop(){
    if(s.top==-1){
        printf("Stack is empty");
    }
    else{
        s.top--;
    }
}

void display(){
    if(s.top==-1){
        printf("Stack is empty");
    }
    else{
        int i;
        for(i=s.top;i>=0;i--){
            printf("%d\n",s.arr[i]);
        }
    }
}

int main(void){
    s.top=-1;
    int option=1;
    while(option){
        printf("1.Push\n2.Pop\n3.Display\n4.Exit");
        int a;
        scanf("%d",&a);
        switch(a){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
        fflush(stdin);
        printf("Do you want to continue : 0 or 1");
        scanf("%d",&option);
    }
}
