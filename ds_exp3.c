#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct new{
    int a;
    float b;
};
int main(){
    struct new *a1;
    struct new *b1;

    a1 = (int*)malloc(sizeof(int));
    b1 = (float*)malloc(sizeof(float));

    printf("Enter the integer data: ");
    scanf("%d", &a1->a);

    printf("Enter the flaot data: ");
    scanf("%f", b1->b);
    
    printf("%d", a1->a );
    printf("%f", b1->b);

return 0;
}