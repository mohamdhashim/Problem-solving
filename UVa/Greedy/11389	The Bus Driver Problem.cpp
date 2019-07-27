/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 11389	The Bus Driver Problem               #
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
    long long n,d,r;
    while(cin>>n>>d>>r&&n!=0)
    {
        int am[n],pm[n];
        int over=0;

        for(int i=0;i<n;i++)
            cin>>am[i];
        for(int i=0;i<n;i++)
            cin>>pm[i];

        sort(am,am+n);
        sort(pm,pm+n);

        for(int i=0;i<n;i++)
        {
            if(am[i]+pm[n-i-1]>d)
            {
                over+=(am[i]+pm[n-i-1])-d;
            }
        }
        
        cout<<over*r<<endl;

    }

    return 0;
}
