#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack{
    int data;
    struct stack *next;
    struct stack *prev;
};

struct stack *temp;
struct stack *temp1;
struct stack *head=NULL;

void push(struct stack *new){
    temp=head;
    if(head==NULL){
        head=new;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
    }
}

void pop(){
    temp=head;
    temp1=head;
    if(head==NULL){
        printf("stack is underflow\n");
    }
    else if(head->next==NULL){
        head=NULL;
        printf("Stack is empty now\n");
    }
    else{
        
        while(temp->next!=NULL){
        temp=temp->next;
        }
        while(temp1->next!=temp){
        temp1=temp1->next;
        }
    temp1->next=NULL;
    }    
}

void display(){
    temp=head;
    if(head==NULL){
        printf("stack is underflow\n");
    }
    else{
        while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    }
}

int main(){
    struct stack *new;
    int n,choice;
    
    while(1){
        printf("1. push\n2. pop\n3. display\n4. exit\n");
        
        printf("Enter the choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                new=(struct stack*)malloc(sizeof(struct stack));
                printf("Enter the data: ");
                scanf("%d",&new->data);
                new->next=NULL;
                push(new);
                break;
                
            case 2:
                pop();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                exit(1);
                
            case 5:
                printf("Wrong choice\n");
                break;
        }
    }
}