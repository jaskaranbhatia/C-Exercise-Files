#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *createList(int n);

int main(void){
}

struct Node *createList(int n){
    Node* Head=NULL;
    Node* p=NULL;
    Node* temp=NULL;
    for(int i=0;i<n;i++){
        temp=(node*)malloc(sizeof(node));
        printf("Enter data for the node : ");
        scanf("%d",&(temp->data));
        temp->next=NULL:
        if(Head==NULL){
            Head=temp;
        }
        else{
            p=Head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=temp;
        }
    }
}
