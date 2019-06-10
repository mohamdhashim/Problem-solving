/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : B. Sum of Digits                               #
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

string sum_num (string s)
{
    int arr[s.size()]; //used array for big numbers.
    int sum=0;

    for(int i=0;i<s.size();i++)
    {
        arr[i] = s[i] - 48; //turn from chars to num Asccii '1' - 48 = 1.
        sum+=arr[i];
    }

    ostringstream ss;
    ss<<sum;
    return ss.str();
}

int main()
{
    string s;
    cin>>s;
    int result=0;

    while(s.size()!=1)
    {
        s=sum_num(s);
        result++;
    }

    cout<<result;
}
