/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 11292	Dragon of Loowater                       #
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
#include<fstream>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m&&n!=0)
    {
        int dragon[n];
        int knight[m];

        for(int i=0;i<n;i++)
            cin>>dragon[i];

        for(int i=0;i<m;i++)
            cin>>knight[i];

        sort(dragon,dragon+n);
        sort(knight,knight+m);

        int i=0,j=0,sum=0; // sum of gold coins
        bool cant_win=0;// to check if knights will win or not;

        while(j<n)
        {
            if(i==m)
            {
                cant_win=1;
                break;
            }else
            {
                if(knight[i]>=dragon[j])
                {
                    sum+=knight[i];
                    i++;
                    j++;
                }else
                {
                    i++;
                }
            }
        }

        if(cant_win)
            cout<<"Loowater is doomed!"<<endl;
        else
            cout<<sum<<endl;
    }

    return 0;
}
