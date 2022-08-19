#include <stdio.h>
struct sum{
    int a;
    float b;
};

int main()
{
    struct sum a1;
    struct sum b1;
    struct sum *a2;
    struct sum *b2;
    
    a2= &a1;
    b2= &b1;
    
    
    printf("Enter the integer value: ");
    scanf("%d", &a2->a);

    printf("Enter the float value: ");
    scanf("%f", &b2->b);
    float s=a2->a+b2->b;
    
    printf("%f",s);
    
    return 0;
}

