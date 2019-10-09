//Graph theory 
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string.h>

using namespace std;


int n;
int visited[100][100];
char arr[100][100];

bool valid (int x,int y)
{
    return x>=0 && x<n && y>=0 && y<n;
}

int movx[4]={0,1,-1,0};
int movy[4]={-1,0,0,1};
bool vertical = 0;

bool new_ship(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        int nx = x+movx[i] , ny = y+movy[i]; // new x and new y after transaction in movx[] and movy[];
        if(valid(nx,ny)&&!visited[nx][ny]&&arr[nx][ny]!='.')
        {
            visited[nx][ny]=1;
            new_ship(nx,ny);

        }
    }

    return 1;
}

int main()
{

    int t;
    cin>>t;

    for(int test=0;test<t;test++)
    {
        memset(visited,0,sizeof visited);
        memset(arr,'0',sizeof arr);
        int count=0;

        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>arr[i][j];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]=='x'&&!visited[i][j])
                {
                    visited[i][j]=1;
                    count+=new_ship(i,j);
                }
            }
        }
        printf("Case %d: %d\n",test+1,count);
    }

    return 0;
}
