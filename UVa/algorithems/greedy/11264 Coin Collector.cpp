/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 11264 Coin Collector                           #
*************************************************************/

#include<iostream>
#include<bits/stdc++.h>
#include<vector>1
#include<stack>
#include<queue>
#include<string>
#include<bitset>
#include<math.h>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int cases=0;cases<T;cases++)
    {
        int n,sum=0,count=0;
        cin>>n;
        int c[n];

        for(int i=0;i<n;i++)
            cin>>c[i];

        for(int i=0;i<n;i++)
        {
            if(i==n-1||c[i]+sum<c[i+1])
            {
                sum+=c[i];
                count++;

            }
        }
        cout<<count<<endl;
    }
    return 0;
}
