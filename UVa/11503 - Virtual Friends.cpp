#include <iostream>
#include <iomanip>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <queue>
#include <map>

//graph DSU
using namespace std;
map<string,int> graph;
int friends[100000];
int sums [100000];

//int gox[8]={0,0,1,-1,1,-1,-1,1};
//int goy[8]={-1,1,0,0,1,1,-1,-1};

/*bool ok(int x,int y)
{
    return  x<n&&y<n&&y>=0&&x>=0;
}*/


int find(int u)
{
    if(friends[u]==u)
        return u;

    return friends[u]=find(friends[u]);
}

void dsu(int u,int v)
{
    int a=find(u);
    int b=find(v);
    if(a != b)
    {
        friends[a] = b;
        sums[b]+=sums[a];
    }

    cout<<sums[b]<<endl;
}

int main()
{
    int test;
    cin>>test;
    for(int t=0;t<test;t++)
    {
        int n;
        cin>>n;
        int count = 1;

        graph.clear();
        for(int i=0;i<n;i++)
        {
            string s1,s2;
            cin>>s1>>s2;

            if(!graph[s1])
            {
                graph[s1]=count;
                friends[count]=count;
                count++;
                sums[count-1]=1;

            }

            if(!graph[s2])
            {
                graph[s2]=count;
                friends[count]=count;
                count++;
                sums[count-1]=1;
            }

            dsu(friends[graph[s1]],friends[graph[s2]]);

        }
    }


    return 0;
}
