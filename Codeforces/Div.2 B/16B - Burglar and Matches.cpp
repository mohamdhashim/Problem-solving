/*************************************************************
# by        : mohamd abda alazez hashim                      #
# problem   : B. Burglar and Matches                         #
# Time(min) : reading : 6||thinking : 12||coding : 20        #
# level     : 5/10                                           #
*************************************************************/
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <stdio.h>
using namespace std;



int main()
{
    int n,m,a,b;
    cin>>n>>m;

    pair<int,int> match_boxes[m];



    for(int i=0;i<m;i++)
    {
        cin>>a>>b;

        match_boxes[i].first=b;
        match_boxes[i].second=a;
    }

    sort(match_boxes,match_boxes+m,greater<pair<int,int>>());

    int sum=0;
    for(int i=0;i<m;i++)
    {
        if(n>match_boxes[i].second)
        {
            sum+=match_boxes[i].first*match_boxes[i].second;
            n-=match_boxes[i].second;
        }
        else
        {
            sum+=n*match_boxes[i].first;
            break;
        }
    }


    cout<<sum;

}
