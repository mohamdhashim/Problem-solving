/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 467 - B Fedor and New Game                     #
# Github    : https://github.com/mohamdzezo                  #
# Time(min) : reading 7 || thinking 6 || code 6 || debug 0.5 #
*************************************************************/

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<bitset>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n,m,k,count=0;
    cin>>n>>m>>k;
    long long  x[m+1],num;

    for(int i=0;i<=m;i++)
        cin>>x[i];

    for(int i=0;i<m;i++)
    {
        num=x[i]^x[m];
        if(__builtin_popcountll(num)<=k)
            count++;
    }

    cout<<count;

}
