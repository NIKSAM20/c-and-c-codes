#include<stdio.h>  
 
struct student  
{
    int roll_no;  
    char name[20];  
    int sap_id;  
    int semester;  
};  
void main()  
{  
    struct student s1,s2,s3;  
     
    printf("\nEnter the roll_no, name, sap_id and semester of student 1: \n");  
    scanf("%d %s %d %d",&s1.roll_no,&s1.name,&s1.sap_id,&s1.semester);  
    
    printf("\nEnter the roll_no, name, sap_id and semesterof student 2: \n");
    scanf("%d %s %d %d",&s2.roll_no,&s2.name,&s2.sap_id,&s2.semester);   
    
    printf("\nEnter the roll_no, name, sap_id and semester of student 3: \n");
    scanf("%d %s %d %d",&s3.roll_no,&s3.name,&s3.sap_id,&s3.semester);   
    
      
    printf("\nDetails of the student are :\n");
    printf("Roll_no\tName\tSap_id\tSemester\n");  
    printf("%d\t\t%s\t\t%d\t\t%d\n",s1.roll_no,s1.name,s1.sap_id,s1.semester);  
    printf("%d\t\t%s\t\t%d\t\t%d\n",s2.roll_no,s2.name,s2.sap_id,s2.semester);  
    printf("%d\t\t%s\t\t%d\t\t%d\n",s3.roll_no,s3.name,s3.sap_id,s3.semester);  
}