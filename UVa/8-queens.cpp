#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int board[8][8]={0};
int mine=100000,sum=0;
int n[8]={1,1,1,1,1,1,1,1};

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

    board[x][y]+=2;

}


bool vaild(int x,int y)
{
    if(board[x][y]>0)
        return 0;

    return 1;
}


void solve(int x ,int y)
{
    int temp =sum;
    if(x==7)
    {
        mine = min(mine,sum);
        return;
    }
    if(y>7)
        return;


    if(vaild(x,y))
    {
        sum+=abs(n[x]-y);
        temp=sum;
        put_it(x,y);

        solve(x+1,0);

        remove_it(x,y);
        sum-=abs(n[x]-y);
        temp=sum;
    }
    else
    {
        solve(x,y+1);
    }
}


int main(){


    solve(0,0);
    cout<<mine;
        return 0;
}
