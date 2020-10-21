#include<bits/stdc++.h>
using namespace std;

//Storing numbers in a temporary Array, used for merge sort.
int tempArr[1000009];
//Storing numbers that are going to be sort.
int ans[1000009];

void mergeSort(int l, int r,int temp[]) {
	if (l >= r) return;
	int mid = (l + r) / 2;
    //Divide and conquer method
	mergeSort(l, mid,temp);
	mergeSort(mid+1, r,temp);
	
	int leftIdx = l;
	int toLeftIdx = mid;
	int rightIdx = mid+1;
	int toRightIdx = r;
	int tempIdx = l;
	
    //While we can compare numbers from the left and the right, we will sort them
	while(leftIdx <= toLeftIdx && rightIdx <= toRightIdx) {
		if (temp[leftIdx] < temp[rightIdx]) {
			tempArr[tempIdx] = temp[leftIdx];
			leftIdx++;
		} else {
			tempArr[tempIdx] = temp[rightIdx];
			rightIdx++;
		}
		tempIdx++;
	}

    //If there are some numbers that are left in left array
	while(leftIdx <= toLeftIdx) {
		tempArr[tempIdx++] = temp[leftIdx++];
	}
    //If there are some numbers that are left in right array
	while(rightIdx <= toRightIdx) {
		tempArr[tempIdx++] = temp[rightIdx++];
	}
    //rewrite the answer array
	for(int i=l; i<=r; i++) {
		temp[i] = tempArr[i];
	}
}

//Driver Code
int main(){
	int a;
	cout << "How many numbers that you want to sort? (max 1.000.000) :  ";
	cin >> a;
	for(int i = 0;i<a;i++){
		cin >> ans[i];
	}
	mergeSort(0,a-1,ans);
	for(int i = 0;i<a;i++){
		cout << ans[i] << " ";
		if(i % 10 == 0 && i > 0) cout << endl;
	}
}