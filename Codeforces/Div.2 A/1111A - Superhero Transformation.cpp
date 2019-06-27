/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 1111A - Superhero Transformation               #
# Time      : 9 min                                          #
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

bool is_vowel(char c)
{
    if(c=='a'||c=='u'||c=='o'||c=='e'||c=='i')
        return 1;

    return 0;
}
int main()
{
    string s,t;
    cin>>s>>t;

    if(s.size()!=t.size())
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if((is_vowel(s[i])&is_vowel(t[i]))||(!is_vowel(s[i])&!is_vowel(t[i])))
        {

        }else
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}
