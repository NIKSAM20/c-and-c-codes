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
    if(head== NULL){
        head=new;
    }
    else{
        new->next=head;
        head=new;
        
    }
}

void ins_end(struct node *new){
    temp=head;
    if(head== NULL){
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
    if(head== NULL){
        printf("No itme to delete");
    }
    else{
        head=head->next;
    }
}

void del_end(){
    temp= head;
    temp1= head;

    while(temp->next!= NULL){
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
        printf("%d",temp->data);
        temp=temp->next;
    }
}

int main(){
    int n,choice;
    struct node *new1;

    while(1){

        printf(" 1. ins_beg\n 2. ins_end\n 3. del_beg\n 4. del_end\n 5. traverse\n 6. exit\n ");
        
        printf("Enter the choice: \n");

        scanf("%d", &choice);

        switch(choice){
            case 1:
                    new1=(struct node*)malloc(sizeof(struct node));
                    printf("Enter the data: ");
                    scanf("%d", &new1->data);

                    ins_beg(new1);
                    break;

            case 2:
                    new1=(struct node*)malloc(sizeof(struct node));
                    printf("Enter the data: ");
                    scanf("%d", &new1->data);

                    ins_end(new1);
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

            case 6:
                    exit(1);                
        
        }
    }
return 0;
}