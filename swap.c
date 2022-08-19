#include<stdio.h>
void swap(int *a, int *b){
    int swap=*a;
    *a=*b;
    *b=swap;
    printf("new a= %d\n", *a);
    printf("new b= %d\n", *b);
}
int main(){
    int a,b;
    printf("Enter valaues of a and b: ");
    scanf("%d %d", &a,&b);
    printf("original a= %d\n",a);
    printf("original b= %d\n",b);
    int *pa=&a;
    int *pb=&b;
    swap(pa,pb);

return 0;    
}