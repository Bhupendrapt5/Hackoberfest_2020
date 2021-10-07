//bfs traversal of undirected graph
#include<bits/stdc++.h>
#define ll long long int
#define ld double
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1,vector<int>());
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(n+1,0);
    queue<int>q;
    q.push(1);//starting from node 1
    cout<<"The bfs traversal of the graph is - ";
    while(!q.empty())
    {
        int f=q.front();
        cout<<f<<" ";
        vis[f]=1;
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            if(!vis[adj[f][i]])
            {
                q.push(adj[f][i]);
            }
        }
    }
    return 0;
}
/*INPUT
6 5
1 2 
2 6 
1 3 
3 4
3 5 

OUTPUT
The bfs traversal of the graph is - 1 2 3 6 4 5 

TIME COMPLEXITY OF THE PROGRAM
O(V+E)
where V stands for number of vertices and E for number of edges
*/
