/*******Program to reverse an array or string*********/

#include<stdio.h>

int main(){

    // Enter the size of the array
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Enter the values in array
    int arr[n];
    printf("Enter array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for(int i=0; i<=n/2; i++) {
        int k = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = k;
    }

    // Print the reversed array
    printf("Reversed Array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}