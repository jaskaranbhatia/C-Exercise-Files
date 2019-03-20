#include<stdio.h>
#define MAX 100

int arr[MAX];
int front=-1;
int rear=-1;

void insert(){
    if(rear==MAX-1){
        printf("Queue is Full");
    }
    else{
            if(front==-1)
            front=0;
            int num;
            scanf("%d",&num);
            rear++;
            arr[rear]=num;
        }
    }


void del(){
    if(front==-1){
        printf("Queue is Empty");
    }
    else{
        printf("Deleted element %d",arr[front]);
        front++;
    }
}

void display(){
    if(front==-1){
        printf("Queue is Empty");
    }
    else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d\n",arr[i]);
        }
    }
}

main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            del();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Wrong choice \n");
        } /*End of switch*/
    } /*End of while*/
}
