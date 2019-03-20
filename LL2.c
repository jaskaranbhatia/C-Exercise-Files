#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insert(int x){
    struct node *t;
    t=(node*)malloc(sizeof(struct node));
    if(start==NULL){
        start=t;
        t->data=x
        t->next=NULL;
    }
    t->data=x;
    t->next=start;
    start=t;
}

void insertend(int x){

}
