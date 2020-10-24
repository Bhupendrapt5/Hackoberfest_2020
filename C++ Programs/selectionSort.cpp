using namespace std; 

/* Selection Sort algorithm */
void selectionSort(int arr[],int size){
	int minIdx;
	int tmp;
	for(int i=0;i<size;i++){
		minIdx=i;
		for(int j=i;j<size;j++){
			if(arr[j] < arr[minIdx]){
				minIdx=j;
			}
		}
		//swap
		tmp=arr[i];
		arr[i]=arr[minIdx];
		arr[minIdx]=tmp;
	}
}

/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
// Driver program to test above functions  
int main()  
{  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  