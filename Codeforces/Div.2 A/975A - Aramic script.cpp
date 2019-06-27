/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 975A - Aramic script                           #
# Time      : 22 min                                         #
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
    int n;
    cin>>n;


    string s;
    set<string> object;
    for(int i=0;i<n;i++)
    {
        string copy="";
        bool x[1000]={};
        cin>>s;

        for(int j=0;j<s.size();j++)
        {

            if(x[s[j]]==0)
            {
                copy+=s[j];
                x[s[j]]=1;
            }
        }
        sort(copy.begin(),copy.end());
        object.insert(copy);

    }

    cout<<object.size();

    return 0;
}
