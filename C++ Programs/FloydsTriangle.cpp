/*
Example 1
Input : 2
Output :
1
2 3

Example 2
Input : 5
Output : 
1     
2 3    
4 5 6   
7 8 9 10  
11 12 13 14 15
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int k = 1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<=i)
			{
				cout<<k<<" ";
				k++;
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}
