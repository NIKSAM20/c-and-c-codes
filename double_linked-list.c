#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head= NULL;
struct node *temp;
struct node *temp1;
struct node *end;

void ins_beg(struct node *new){
    if(head== NULL){
        head=new;
    }
    else{
        head->prev= new;
        new->next= head;
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
        new->prev= temp;
    }
}

void del_beg(){
     if(head == NULL)  
    {  
        printf("\n no items to delete\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);
    }
    else  
    {  
        temp = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(temp);
    }            
}

void del_end(){
    if(head == NULL)  
    {  
        printf("\n no items to delete\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
    }  
    else   
    {  
        temp = head;   
        if(temp->next != NULL)  
        {  
            temp= temp-> next;   
        }  
        temp-> prev -> next = NULL;   
        free(temp);  
    }  
}  

void front_traverse(){
    temp=head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void back_traverse(){
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    end=temp;
    
	while(end != NULL)
	{
		printf("%d ",end->data);
		end= end->prev;
	}
	printf("\n");
}

int main(){
    int n,choice;
    struct node *new1;

    while(1){

        printf("1. ins_beg\n2. ins_end\n3. del_beg\n4. del_end\n5.front_traverse\n6.back_traverse\n7. exit\n ");
        
        printf("Enter the choice: ");

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
                    front_traverse();
                    break;

            case 6:
                    back_traverse();
                    break;
            case 7:
                    exit(1);                
        
        }
    }
return 0;
}