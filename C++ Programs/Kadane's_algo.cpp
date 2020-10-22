#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[1000];
	int currentSum = 0;
	int maxSum = 0;
	
	for(int i=0; i<n; i++)
	{
	    cin>>a[i];
	}
	
	//Using kadane's Algorithm to find maximum sum
	for(int i=0; i<n; i++)
	{
	    currentSum = currentSum + a[i];
	    if(currentSum < 0)
	    {
	        currentSum = 0;
	    }
	    maxSum = max(currentSum , maxSum);
	}
	cout<<"Maximum sum is "<<maxSum<<endl;
	
	return 0;
}
