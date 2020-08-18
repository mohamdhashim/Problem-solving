#include <iostream>
#include <strings.h>
#include <math.h>
#include <vector>
#include <queue>

using namespace std;
// DFS ( Graph theory )

vector<int>g[1000000];
priority_queue<int>cost;
int sons[1000000];
int depth[1000000];

void subtrees_nodes(int node,int father,int level)//num of every node subtree nodes;
{
    sons[node]=1;
    depth[node]=level;
    for(auto it = g[node].begin();it!=g[node].end();it++)
    {
        if(*it==father) continue;

        subtrees_nodes(*it,node,level+1);

        sons[node]+=sons[*it];
    }
}


long long solve(int k,int n)
{
    for(int i=1;i<=n;i++)
    {
        cost.push(depth[i]-(sons[i]-1));
    }

    long long sum_sol = 0;
    for(int i=0;i<k;i++){
        if(cost.empty())
            break;

        sum_sol += cost.top();
        cost.pop();
    }

    return sum_sol;
}

int main() {
    /*
     * 1-making tree and push elements ##
     * 2-tracing on the num_of_sons  ##
     * 3-levels arr
     * 4-leaf(vector)
     * 5-cost
     */

    int n,k;//take care n is limit here
    cin>>n>>k;

    int u,v;
    for(int i=1;i<n;i++) {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    subtrees_nodes(1,0,0);
    if(n==k)
        cout<<0;
    else
        cout<<solve(k,n);
    

    return 0;
}
