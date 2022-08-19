#include <stdio.h>
int sum(int arr[], int n)
{ 
    int a=0;
    if (n == 0)
    {
        a=a+ arr[0];
    }
    else
    {
        a=a+ sum (arr,n-1);
    }
    return a;
    
}

int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the values in the array: ");
    for (i =0 ; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int s=sum(arr, n);
    printf("sum of array is %d",s);
}