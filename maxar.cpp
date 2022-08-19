#include <iostream>
using namespace std;
int main()
{
int n;
cout<< "Enter the value of n: ";
cin>>n;

int arr[n];
int i,temp;

cout <<"Enter the values in the array: ";

for(i=0; i<n; i++){
	cin>>arr[i];
	}

int max=arr[0];
int min=arr[0];

for(i=0; i<n; i++){
	if (arr[i]>max)
	max=arr[i];
	
	if (arr[i]<min)
	min=arr[i];
	}


cout<<"maximum value is: " <<max <<endl;
cout<<"minimum value is: " <<min <<endl; 

return 0;
}