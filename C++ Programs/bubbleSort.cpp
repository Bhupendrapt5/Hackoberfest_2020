#include <bits/stdc++.h> 
using namespace std; 

void bubbleSort(int array[],int sz){
	int i,j;
	int tmp;
	for(i=0;i<sz-1;i++){
		for(j=0;j<sz-i-1;j++){
			if(array[j] > array[j+1]){
				//swap arr[j] and arr[j+1]
				tmp=array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
			}
		}
	}
}

/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
// Driver code  
int main()  
{  
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  