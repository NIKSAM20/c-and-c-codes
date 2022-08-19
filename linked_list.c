#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
};
struct node *head= NULL;
struct node *temp;
struct node *temp1;

void ins_beg(struct node *new){
    if(head==NULL){
        head=new;
    }
    else{
        new->next=head;
        head=new;
    }
    
}

void ins_end(struct node *new){
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

void del_beg(){
    if(head==NULL){
        printf("List is empty\n");
    }
    else{
        head=head->next;
    }
}
void del_end(){
    temp=head;
    temp1=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp1->next!=temp){
        temp1=temp1->next;
    }
    temp1->next=NULL;
}
void traverse(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    int n,choice;
    struct node *new;
    
    while(1){
        printf("1. ins_beg\n2. ins_end\n3. del_beg\n4. del_end\n5. traverse\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                new= (struct node*)malloc(sizeof(struct node));
                printf("Enter the data: ");
                scanf("%d", &new->data);
                new->next=NULL;
                ins_beg(new);
                break;
                
            case 2:
                new= (struct node*)malloc(sizeof(struct node));
                printf("Enter the data: ");
                scanf("%d", &new->data);
                new->next=NULL;
                ins_end(new);
                break;
                
            case 3:
                del_beg();
                break;
                
            case 4:
                del_end();
                break;
                
            case 5:
                traverse();
                break;
                
            default: 
                exit(1);
        }
    }
}

