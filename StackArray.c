#include<stdio.h>
#define MAX 10

int arr[MAX];
int top=-1;

void push(){
    if(top==MAX-1){
        printf("Stack is Full");
    }
    else{
        int num;
        printf("Enter element to be pushed : ");
        scanf("%d",&num);
        top++;
        arr[top]=num;
    }
}

void pop(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        top--;
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        int i;
        for(i=top;i>=0;i--){
            printf("%d\n",arr[i]);
        }
    }
}

int main(void){
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
