/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : B. Queue at the School                         #
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
#include<string>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;


    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j]=='B'&s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }

    cout<<s;
}
