/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 227B. Effective Approach                       #
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

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int n_arr[n];

    for(int i=0;i<n;i++)
        cin>>n_arr[i];

    cin>>m;
    int x,num[n]; // sum of numbers

    for(int i=0;i<n;i++)
        num[i]=0;

    for(int i = 0;i<m;i++)
    {
        cin>>x;
        num[x-1]++;
    }

    long long vasya=0,peta=0; // don't forget long long for big sum

    for(int i=0;i<n;i++)
    {
        vasya+=((i+1)*num[n_arr[i]-1]);
        peta+=((n-i)*num[n_arr[i]-1]);
    }
    
    cout<<vasya<<" "<<peta;
}
