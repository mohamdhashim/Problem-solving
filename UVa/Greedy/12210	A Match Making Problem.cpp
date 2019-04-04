/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 12210	A Match Making Problem                   #
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
    int B,S,input,yong,cases=0;//just any large number to assign min value in vectors


    while(cin>>B>>S&&B!=0)
    {
        cases++;
        vector<int>male;
        vector<int>female;
        yong=100000;

        for(int i=0;i<B;i++)
        {
            cin>>input;
            male.push_back(input);
            yong=min(input,yong);
        }

        for(int i=0;i<S;i++)
        {
            cin>>input;
            female.push_back(input);
        }

        if(male.size()<=female.size())
            printf("Case %d: 0\n",cases);
        else
            printf("Case %d: %d %d\n",cases,male.size()-female.size(),yong);
    }
    return 0;
}
