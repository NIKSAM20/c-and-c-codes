#include<stdio.h>
int main(){
    int m,n,i,j,temp;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[m][n];
        printf("Enter the values in the matrix\n");

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
            }
    }
    
    printf("transpose of matrix is\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", arr[j][i]);
            }
            printf("\n");
    }
return 0;
}