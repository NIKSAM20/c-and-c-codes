#include <stdio.h>
struct array{
    int ar[2];
    
};
int main()
{
    int i;
    struct array arr[2];
    printf("Ente the values in the array: ");
    for(i=0; i<2; i++){
        scanf("%d", &arr[i].ar[i]);
    } 
    printf("Elements of the array are: ");

    for(i=0; i<2; i++){
        printf("%d ", arr[i].ar[i]);
    }
    return 0;
}
