#include <iostream>
#include <conio.h>
using namespace std;

const int v = 7;

void floyds(int b[][v])
{
    int i, j, k;
    for (k = 0; k < v; k++)
    {
        for (i = 0; i < v; i++)
        {
            for (j = 0; j < v; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < v; i++)
    {
        cout<<"\nMinimum Cost With Respect to Node:"<<i<<endl;
        for (j = 0; j < v; j++)
        {
            cout<<b[i][j]<<"\t";
        }
 
    }
}
//floyd warshall
int main()
{
    int b[v][v];
    cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";
    for (int i = 0; i < v; i++)
    {
        cout<<"enter values/cost for "<<(i+1)<<" row"<<endl;
        for (int j = 0; j < v; j++)
        {
            cin>>b[i][j];
        }
    }
    floyds(b);
    getch();
}
