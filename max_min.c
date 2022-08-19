#include <stdio.h>

int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d", &n);

int arr[n];
int i,temp;

printf("Enter the values in the array: ");

for(i=0; i<n; i++){
	scanf("%d", &arr[i]);
	}

int max=arr[0];
int min=arr[0];

for(i=0; i<n; i++){
	if (arr[i]>max)
	max=arr[i];
	
	if (arr[i]<min)
	min=arr[i];
}

printf("maximum value is: %d\n", max);
printf("maximum value is: %d\n", min); 

return 0;
}