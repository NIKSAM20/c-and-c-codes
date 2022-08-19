#include <stdio.h>
struct sum{
    int a;
    float b;
};

int main()
{
    struct sum a1;
    struct sum b1;
    
    printf("Enter the integer value: ");
    scanf("%d", &a1.a);
    
    printf("Enter the float value: ");
    scanf("%f", &b1.b);
    
    float s=a1.a+b1.b;
    printf("%f",s);
    
return 0;
}
