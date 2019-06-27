/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 131A - cAPS lOCK                               #
# Github    : https://github.com/mohamdzezo                  #
# Time      : 15 min                                         #
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
    string s;
    cin>>s;

    int n=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]-'a'>=0)
            n++;
    }

    if(n==1&(s[0]-'a')>=0)
    {
        s[0]=s[0]-(32);
        for(int i=1;i<s.size();i++)
            s[i]=s[i]+(32);

        cout<<s;
    }else if(n==0)
    {
        for(int i=0;i<s.size();i++)
            s[i]=s[i]+(32);

        cout<<s;
    }else
    {
        cout<<s;
    }

    return 0;
}
