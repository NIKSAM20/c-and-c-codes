#include<stdio.h>
#include <malloc.h>

int main(){
int *arr;    
int n,i;
printf("Enter the size: ");
scanf("%d", &n);

arr=(int*)malloc(n*sizeof(int));

printf("Enter the elements: ");
for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}
printf("Given array is: ");
for(i=0; i<n; i++){
    printf("%d ", arr[i]);
}
return 0;
}