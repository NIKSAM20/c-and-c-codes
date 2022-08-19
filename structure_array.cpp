#include <stdio.h>
struct array{
    int ar[2];
    
};

int main()
{
    int i;
    struct array arr[2];
    printf("Ente the values in the array\n");
    for(i=0; i<4; i++){
        scanf("%d", &arr[i].ar[i]);
    } 
    
    printf("Elements in the array are: \n");
    for(i=0; i<4; i++){
        printf("%d\n", arr[i].ar[i]);
    }
    return 0;
}