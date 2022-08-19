#include <iostream>
using namespace std;
int main()
{
int n;
cout<< "Enter the value of n: ";
cin>>n;

int arr[n];
int i,j,temp;

cout <<"Enter the values in the array: ";

for(i=0; i<n; i++){
	cin>>arr[i];
	}

cout <<"original: "	;
for(i=0; i<n; i++){
	cout<< arr[i]<<" ";
	}
    cout<<endl; 

for (i=0; i<n; i++){
    for (j=i+1;j<n; j++){
        if (arr[j]<arr[i])
        {temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
}
}
cout <<"sorted: ";
for(i=0; i<n; i++){
	cout<< arr[i] <<" " ;
	}
return 0;
}




















#include <stdio.h>

int
main ()
{
  int n, i, j,temp1,temp2;
  printf ("Enter the number of process: ");
  scanf ("%d", &n);

  int p[n];
  int b[n];
  int c[n];

  printf ("Enter the process id: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &p[i]);
    }

  printf ("Enter the burst time: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &b[i]);
    }

    for (i=0; i<n; i++){
    for (j=i+1;j<n; j++){
        if (b[j]<b[i])
        temp1=b[j];
        b[j]=b[i];
        b[i]=temp1;
            
        
    }
    }
    for (i=0; i<n; i++){
        printf("%d ",b[i]);
    }
    
    
return 0;
}