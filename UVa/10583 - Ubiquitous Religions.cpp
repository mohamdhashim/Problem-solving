#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int graph[100000];
bool visited[100000];



int find(int u)
{
    if(graph[u]==u)
        return u;

    return find(graph[u]);
}

void dsu(int u,int v)
{
    int a=find(u);
    int b=find(v);
    if(a != b)
    {
        graph[a] = b;
    }
}

int main()
{
    int n,m,casee=1;
    while(cin>>n>>m&&n!=0)
    {
        memset(visited,0,sizeof visited);

        for(int i=1;i<=n;i++)
        {
            graph[i]=i;
        }

        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;

            a = find(a);
            b = find(b);

            if(a!=b)
                dsu(a,b);


        }

        int sum=0;
        for(int i=1;i<n+1;i++)
        {
            visited[find(i)]=1;
        }
        
        for(int i=1;i<=n;i++)
            sum+=visited[i];
            
        cout<<"Case "<<casee++<<": "<<sum<<endl;
    }


    return 0;
}
