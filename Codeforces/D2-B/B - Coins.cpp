/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : B - Coins                                      #
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

char scale (string s)
{
    if(s[1]=='>')
        return s[0];
    else
        return s[2];
}

int main()
{
    string vs[3]; // vs for vasya scale
    cin>>vs[0]>>vs[1]>>vs[2];

    int coins_values[3]={0,0,0};

    for(int i=0;i<3;i++)
    {
        if(scale(vs[i])=='A')
            coins_values[0]++;
        else if(scale(vs[i])=='B')
            coins_values[1]++;
        else if(scale(vs[i])=='C')
            coins_values[2]++;
    }

    char result[3]={'W','W','W'};
    for(int i=0;i<3;i++)
    {
        if (coins_values[i]==2)
            result[0]=char(65+i);
        else if(coins_values[i]==1)
            result[1]=char(65+i);
        else if(coins_values[i]==0)
            result[2]=char(65+i);
    }

    for(int i=0;i<3;i++)
        if(result[i]=='W')
        {
             cout<<"Impossible";
             return 0;
        }

    for(int i=2;i>=0;i--)
        cout<<result[i];

}
