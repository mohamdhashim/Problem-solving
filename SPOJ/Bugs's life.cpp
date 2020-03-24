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

vector<int> graph[2000];
int gender[2001];
bool visited[2001];

//Bipartite Graph BFS
bool is_gay(int source)
{
    queue<int> bfs;
    if(gender[source] == -1)
        gender[source] = 1; //1=male 0=female

    bfs.push(source);
    while(!bfs.empty())
    {
        int u= bfs.front();
        bfs.pop();
        visited[u]=1;

        for(int i=0;i<graph[u].size();i++)
        {

            if(gender[graph[u][i]]==-1)
            {
                gender[graph[u][i]] = !gender[u];
                bfs.push(graph[u][i]);
            }
            else if(gender[graph[u][i]]==gender[u])
                    return true;


        }

    }
    return false;
}
int main()
{
    int test;
    cin>>test;

    for(int t=0;t<test;t++)
    {
        int n,m,u,v;
        cin>>n>>m;
        for(int i=0;i<=n;i++)
        {
            graph[i].clear();
        }
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        bool fucken_gays = 0;
        memset(gender,-1,sizeof gender);
        memset(visited,0,sizeof visited);

        for(int i=1;i<=n;i++)
        {

            if(!visited[i]&&is_gay(i))
                    fucken_gays = 1;
        }

        cout<<"Scenario #"<<t+1<<":\n";
        if(fucken_gays)
            cout<<"Suspicious bugs found!\n";
        else
            cout<<"No suspicious bugs found!\n";
    }

    return 0;
}
