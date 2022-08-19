#include<stdio.h>
int i=0;
int input (int arr [], int n)
{
        printf ("Enter Elements in Array\n");
        for (i=0; i<n; i++)
        {
                scanf ("%d", &arr[i]);
        }
}
int output (int arr [], int n)
{
        printf ("Array: [ ");
        for (i=0; i<n; i++)
        {
                printf ("%d ", arr[i]);
        }
        printf ("] \n");
}
 
int insertel (int arr [], int n, int p)
{
        for (i=n-1; i>=(p-1); i--)
        {
                arr[i+1] = arr[i];
        }
        printf ("Enter Element\n");
        scanf ("%d", &arr[p-1]);
        output (arr, n+1);
}

int deleteel (int arr [], int n, int p)
{
        for (i=p-1; i<=n; i++)
        {
                arr[i]=arr[i+1];
        }
        output (arr, n);
}

void main ()
{
        int size=0, p1=0, p2=0;
        char ch, choice;
        printf ("Enter Size of Array\n");
        scanf ("%d", &size);
        int arr[size];
        input (arr, size);
        output (arr, size);
        do
        {
                printf ("Do you want to add or delete elements? A/D\n");
                scanf (" %c", &choice);
                if (choice=='A' || choice=='a')
                {
                        printf ("Enter Position to Enter Elements\n");
                        scanf ("%d", &p1);
                        insertel (arr, size, p1);
                }
                if (choice=='D' || choice=='d')
                {
                        printf ("Enter Position to Delete Elements\n");
                        scanf ("%d", &p2);
                        deleteel (arr, size, p2);
                }
                printf ("Do you want to Continue? Y/N\n");
                scanf (" %c", &ch);
        } while (ch=='Y' || ch=='y');
