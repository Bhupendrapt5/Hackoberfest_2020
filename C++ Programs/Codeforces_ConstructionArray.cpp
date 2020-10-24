//https://codeforces.com/contest/1353/problem/D
#include <bits/stdc++.h>

using namespace std;

void func(vector<pair<int, int>> &v, int l, int r)
{
    if (l > r)
    {
        return;
    }
    int mid = (l + r) / 2;
    v.push_back({(r - l + 1), mid});
    func(v, l, mid - 1);
    func(v, mid + 1, r);
    return;
}

bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.first > p2.first)
    {
        return false;
    }
    if (p1.first < p2.first)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return true;
    }
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int l = 0;
        int r = n - 1;
        vector<pair<int, int>> v;
        func(v, l, r);
        sort(v.begin(), v.end(), comp);
        int i = 1;
        int kk = v.size() - 1;
        while (i < n + 1)
        {
            a[v[kk].second] = i;
            i++;
            kk--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
