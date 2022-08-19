#include<stdio.h>

int main(){
    float a,b,r;
    char o;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the first word of the operator: ");
    scanf("%c", &o);

    switch(o){
        case 'a':
        r=a+b;
        printf("Addition of a and b is: %f",r);
        break;

        case 's':
        r=a-b;
        printf("Addition of a and b is: %f",r);
        break;

        case 'd':
        r=a/b;
        printf("Addition of a and b is: %f",r);
        break;

        case 'm':
        r=a*b;
        printf("Addition of a and b is: %f",r);
        break;
        
    }
return 0;        
}