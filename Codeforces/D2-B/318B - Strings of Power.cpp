/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 318B - Strings of Power                        #
# Time      : 150 min                                        #
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
    string s;
    cin>>s;

    vector<char> pos;
    if(s.size()<6)
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<s.size()-4;i++)
    {
        if(s[i]=='h'&s[i+1]=='e'&s[i+2]=='a'&s[i+3]=='v'&s[i+4]=='y')
        {
            pos.push_back('H');
            i+=4;

        }else if(s[i]=='m'&s[i+1]=='e'&s[i+2]=='t'&s[i+3]=='a'&s[i+4]=='l')
        {
            pos.push_back('M');
            i+=4;
        }

    }

    long long count_h=0,sum=0;
    for(int i=0;i<pos.size();i++)
    {
        if(pos[i]=='H')
            count_h++;
        else
            sum+=count_h;
    }

    cout<<sum;
    return 0;
}
