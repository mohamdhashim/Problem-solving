#include <iostream>
#include <iomanip>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int find(int u)
{
    if(graph[u]==u)
        return u;

    return graph[u]=find(graph[u]);
}

void dsu(int u,int v)
{
    int a=find(u);
    int b=find(v);
    if(a != b)
        graph[a]=b;
}

int main()
{
    int n,m;

    while(cin>>n>>m && n!=0)
    {
        for(int i=0;i<n;i++)
            graph[i]=i;

        for(int i=0;i<m;i++)
        {
            int j,x;
            cin>>j>>x;
            j--;
            while(j--)
            {
                int u = x;
                cin>>x;
                dsu(x,u);
            }
        }
        
        int count=0;
        for(int i=0;i<n;i++)
            if(find(i)==find(0))
                count++;

        cout<<count<<endl;
    }
    return 0;
}
