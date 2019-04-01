/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 12405	Scarecrow                                #
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
    int T;
    cin>>T;
    //shit!! finally after trying all stupid solutions 3hr
    for(int cases=1;cases<=T;cases++)
    {
        int N,sum=0;
        string s;
        cin>>N>>s;

        for(int i=0;i<N;)
        {
            if(s[i]=='.')
            {
                sum++;
                i=i+3;
            }else
                i++;
        }

        printf("Case %d: %d\n",cases,sum);
    }
    return 0;
}
