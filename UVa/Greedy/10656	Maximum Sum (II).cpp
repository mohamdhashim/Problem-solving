/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 10656	Maximum Sum (II)                         #
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
    int N;

    while(cin>>N&&N!=0)
    {
        int x[N];
        vector<int>result;
        
        for(int i=0; i<N; i++)
            cin>>x[i];

        for(int i=0; i<N; i++)
        {
            if(x[i]!=0)
                result.push_back(x[i]);
        }

        if(result.size()==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<result[0];
            for(int i=1; i<result.size(); i++)
                cout<<" "<<result[i];

            cout<<endl;
        }
    }
    return 0;
}
