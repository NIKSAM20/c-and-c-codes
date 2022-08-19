#include <stdio.h>
int recsum (int a [], int n)
{
        if(n==1)
        {
                return a [0];
        }
        else
        {
                return a[n-1] + recsum (a, n-1);
        }
}
void main ()
{
        int n=0, sum=0;
        printf ("Enter size of array\n");
        scanf ("%d", &n);
        int arr[n];
        printf ("Enter elements in array\n");
        for (int i=0; i<n; i++)
        {
                scanf ("%d", &arr[i]);
        }
        sum = recsum (arr, n);
        printf ("Sum: %d\n", sum);
}
