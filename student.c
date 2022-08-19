#include <stdio.h>
struct student{
    int roll_no;
    char name[100];
    int sap_id;
    int semester;
};
int main(){
    int i;
    struct s1;
    struct s2;
    struct s3;
    struct s4;
    struct s5;

    printf("Enter the roll numbers: ");
    for(i=1; i<=5; i++){ 
        scanf("%d",&s[i].roll_no);
    }

    printf("Enter the names : ");
    for(i=1; i<=5; i++){ 
        scanf("%s",&s[i].name);
    }

    printf("Enter the sap_id: ");
    for(i=1; i<=5; i++){ 
        scanf("%d",&s[i].sap_id);
    }
    
    printf("Enter the semester: ");
    for(i=1; i<=5; i++){ 
        scanf("%d",&s[i].semester);
    }
    
}