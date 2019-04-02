/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : A. Snow Footprints                             #
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
    int n,count_R=0,count_L=0,beginning=0;//count beginning dots (....)LLL to know starting position
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
            beginning++;
        else break;
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
            count_R++;
        else if(s[i]=='L')
            count_L++;
    }

    if(count_R==0)// only Lifts foot prints ..LLLL...
    {
        cout<<beginning+1<<" "<<beginning; // beginning +1 because he will start after dots ...L beginning = 4;
    }else
    {
        cout<<beginning+1<<" "<<beginning+count_R+1;//beginning position and last R position because problem alway in with right ;
    }

    return 0;
}
