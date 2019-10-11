#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string.h>

using namespace std;
//https://www.udebug.com/UVa/11094

int m,n,sum=1;
char land;
int visited[20][20];
char arr[20][20];

bool valid (int x,int y)
{
    return y>=0 && y<n;
}

int movx[4]={0,1,-1,0};
int movy[4]={-1,0,0,1};

int curr_land(int x,int y)
{
    visited[x][y]=1;
    sum++;
    for(int i=0;i<4;i++)
    {
        int nx = x + movx[i];
        int ny = y + movy[i];

        if(nx<0)
            nx=m-1;
        else if(nx>m)
            nx=0;

        if(valid(nx,ny)&&arr[nx][ny]==land&&!visited[nx][ny])
        {
            curr_land(nx,ny);
        }
    }
    return 0;
}


int main()
{
    while(cin>>m>>n)
    {
        int x,y; // for his home
        memset(arr,0,sizeof arr);
        memset(visited,0,sizeof visited);

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }

        cin>>x>>y;
        land = arr[x][y];

        curr_land(x,y);

        int maxe=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==land&&!visited[i][j])
                {
                    sum=0;
                    curr_land(i,j);
                    cout<<i<<" "<<j<<endl;
                    cout<<"===="<<sum<<"====\n";
                    maxe = max(maxe,sum);
                }
            }
        }
        cout<<maxe<<endl;
    }
    return 0;
}
