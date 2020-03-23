/*************************************************************
# by        : mohamd abda alazez hashim                      #
# problem   : uva352 - The Seasonal War                      #
# Time(min) : reading : 10||thinking : 10||coding : 25       #
# level     : 4/10                                           #
*************************************************************/
#include <stdio.h>
#include <iostream>
#include <strings.h>

using namespace std;

/*Graph DFS*/

int n,m;
char arr[25][25];
int visited[25][25];

int gox[8]={0,0,1,-1,1,-1,-1,1};
int goy[8]={-1,1,0,0,1,1,-1,-1};

bool ok(int x,int y)
{
    return  x<n&&y<n&&y>=0&&x>=0;
}


void search_dfs(int x,int y)
{
    int nx,ny;
    for(int i=0;i<8;i++)
    {
        nx = x+gox[i];
        ny = y+goy[i];

        if(ok(ny,ny)&&arr[nx][ny]=='1'&&!visited[nx][ny])
        {
            visited[nx][ny]=1;
            search_dfs(nx,ny);
        }
    }
}
int main()
{

    int test=0;
    while(cin>>n)
    {
        for(int i=0;i<25;i++)
            for(int j=0;j<25;j++)
                {
                    visited[i][j]=0;
                    arr[i][j]=0;
                }
        
        test++;
        int count=0;

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>arr[i][j];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!visited[i][j]&&arr[i][j]=='1')
                {
                    search_dfs(i,j);
                    count++;
                }
            }
        }

        printf("Image number %d contains %d war eagles.\n",test,count);
    }

    return 0;
}
