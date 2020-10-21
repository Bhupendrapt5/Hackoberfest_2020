/*******Program to reverse an array or string*********/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<=n/2; i++) {
        int k = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = k;
    }

    cout<<"Reversed Array: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}