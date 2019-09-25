/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : B. Devu, the Dumb Guy                          #
# Github    :                                                #
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

using namespace std;

int main()
{
    long long n,x,min_hours=0;
    cin>>n>>x;

    int sub[n];
    for(int i=0;i<n;i++)
        cin>>sub[i];

    sort(sub,sub+n);

    for(int i=0;i<n;i++)
    {
        min_hours+=sub[i]*x;

        if(x>1)
            x--;
    }

    cout<<min_hours;
}
