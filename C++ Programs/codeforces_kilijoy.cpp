//https://codeforces.com/contest/1419/problem/C
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n];
		int k = 0;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == x)
			{
				k++;
			}
			sum += a[i];
		}
		if (k == n)
		{
			cout << "0\n";
		}
		else if (k >= 1)
		{
			cout << "1\n";
		}
		else
		{
			if (sum == n * x)
			{
				cout << "1\n";
			}
			else
			{
				cout << "2\n";
			}
		}
	}
	return 0;
}
