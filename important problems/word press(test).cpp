#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;

vector<string>nodes;
vector<vector<int>>edges;
bool visited[200];
int res=0;
bool found =0;
queue<int>level;

bool changable(string s1,string s2)
{
    if(s1 == s2||s1.size()!=s2.size())
        return 0;

    bool one_different = 0;
    for(int i=0; i<s1.size(); i++)
    {

        if(s1[i]!=s2[i])
            if(one_different)
                return 0;
            else
                one_different = 1;
    }

    return 1;
}


void new_node(string s,int loc)
{
    for(int i=0;i<nodes.size();i++)
    {
        if (changable(nodes[i],s))
            edges[loc].push_back(i);
    }
}
void bfs(int curr,string s,int sum)
{
    visited[curr]=1;
    if(!level.empty())
        level.pop();

    if(found)
        return;

    for(int i=0;i<edges[curr].size();i++)
    {
        if(!visited[edges[curr][i]])
        {
            level.push(edges[curr][i]);
            visited[edges[curr][i]]=1;

            if(nodes[edges[curr][i]]==s)
            { found = 1; res=sum; }
        }
    }

    if(!level.empty())
        level.pop();bfs(level.front(),s,sum+1);


}
int main()
{
    string s,start,end;

    memset(visited,0,sizeof visited);
    while(cin>>s&&s!="*")
    {
        nodes.push_back(s);
        edges.push_back({});
    }

    for(int i=0;i<nodes.size();i++)
    {
        new_node(nodes[i],i);
    }

    cin>>start>>end;

    int i=0;
    for(i;i<nodes.size();i++)
        if(nodes[i]==start)
            break;

    bfs(i,end,0);

    cout<<res;
    return 0;
}
