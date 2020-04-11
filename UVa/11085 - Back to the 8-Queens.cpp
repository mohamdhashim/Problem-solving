#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int board[8][8]={0};
int mine=100000;
int n[8];

void put_it(int x,int y)
{
    for(int i=0; i<8;i++)
        board[x][i]++;

    for(int i=0; i<8;i++)
        board[i][y]++;

    for(int i=x,j=y;i<8 && j<8;i++,j++)
        board[i][j]++;

    for(int i=x-1,j=y-1 ;i>=0 && j>=0;i--,j--)
        board[i][j]++;

    for(int i=x-1,j=y+1 ;i>=0 && j<8;i--,j++)
        board[i][j]++;

    for(int i=x+1,j=y-1 ;i<8 && j>=0;i++,j--)
        board[i][j]++;

    board[x][y]-=2;
}


void remove_it(int x, int y)
{
    for(int i=0; i<8;i++)
        board[x][i]--;

    for(int i=0; i<8;i++)
        board[i][y]--;

    for(int i=x,j=y;i<8 && j<8;i++,j++)
        board[i][j]--;

    for(int i=x-1,j=y-1 ;i>=0 && j>=0;i--,j--)
        board[i][j]--;

    for(int i=x-1,j=y+1 ;i>=0 && j<8;i--,j++)
        board[i][j]--;

    for(int i=x+1,j=y-1 ;i<8 && j>=0;i++,j--)
        board[i][j]--;

    board[x][y]+=2;

}


bool vaild(int x,int y)
{
    if(board[x][y]>0)
        return 0;

    return 1;
}


void solve(int x ,int y, int sum)
{

    if(y==8)
    {
        mine = min(mine,sum);
        return;
    }
    if(x>7)
        return;

    for(int i=0;i+x<8;i++)
    {

        if(vaild(i+x,y))
        {
            int temp;
            temp=abs(n[y]-(x+i));

            put_it((x+i),y);

            if(temp>0)
                solve(0,y+1,sum+1);
            else
                solve(0,y+1,sum+0);

            remove_it((x+i),y);
        }
    }
}


int main(){
    int count=0;
    while(cin>>n[0])
    {
        mine=1000;
        for(int i=1;i<8;i++)
            cin>>n[i];
        for(int i=0;i<8;i++)
            n[i]--;
        solve(0,0,0);
        printf("Case %d: %d\n", ++count, mine);

    }

        return 0;
}
