/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 507A. Amr and Music                            #
# Github    : https://github.com/mohamdzezo                  #
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
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    vector< pair<int,int> > vect;
    int n,k,a;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        vect.push_back(make_pair(a,i));
    }
    sort(vect.begin(),vect.end());

    int i=0;
    while(vect[i].first<=k&k>0&i<n)
    {
        k-=vect[i].first;
        i++;
    }

    cout<<i<<endl;
    for(int j=0;j<i;j++)
    {
        cout<<(vect[j].second)+1<<" ";
    }



    return 0;
}
