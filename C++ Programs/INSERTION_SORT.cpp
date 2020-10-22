#include<iostream>
using namespace std;
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//take value
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //insert in right place
   }
}
int main() {
   int n;
   
   cin >> n;
   int arr[n];    //create an array with given number of elements
  
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
 

   insertionSort(arr, n);
   
   display(arr, n);
}
//INPUT: 3 2 1 4
//OUTPUT:1 2 3 4