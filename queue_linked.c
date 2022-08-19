#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct queue{
    int data;
    struct queue *next;
    struct queue *prev;
};

struct queue *temp;
struct queue*head=NULL;

void enque(struct queue *new){
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

void deque(){
    temp=head;
    
    if(head==NULL){
        printf("queue is empty\n");
    }
    else if(head->next==NULL){
        head=NULL;
        printf("queue is empty now\n");
    }
    else{
        head=head->next;
    }
}

void display(){
    temp=head;
    if(head==NULL){
        printf("queue is empty\n");
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
    struct queue *new;
    int n,choice;
    
    while(1){
        printf("1. enque\n2. deque\n3. display\n4. exit\n");
        
        printf("Enter the choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                new=(struct queue*)malloc(sizeof(struct queue));
                printf("Enter the data: ");
                scanf("%d",&new->data);
                new->next=NULL;
                enque(new);
                break;
                
            case 2:
                deque();
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