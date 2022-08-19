#include <iostream>
using namespace std;

int fun(int n,int arr[]){
    int i;
    for(i=0; i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }    
    return arr[n];    
}

int main()
{
    int n;
    cout<<"Enter the limit: ";
    cin>>n;
    
    int i,arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]=fun(n,arr);
    
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}