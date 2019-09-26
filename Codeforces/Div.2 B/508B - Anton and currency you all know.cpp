/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 508B - Anton and currency you all know         #
# Github    : https://github.com/mohamdzezo                  #
# Time      : 50 min                                         #
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

    bool found=0;  // to check if found first even num
    int min_index=-1; // store num of index of min num that can i change

    for(int i=s.size()-1;i>=0;i--)
    {
        if((s[i]-'0')%2==0&!found)
        {

            found=1;
            min_index=i;

        }else if((s[i]-'0')%2==0&s[i]<s[s.size()-1])
        {
            min_index=i;
        }

    }

    if(min_index==-1)
    {

        cout<<-1;

    }else
    {
        char temp = s[s.size()-1];
        s[s.size()-1]=s[min_index];
        s[min_index]=temp;
        cout<<s;
    }
    return 0;
}
