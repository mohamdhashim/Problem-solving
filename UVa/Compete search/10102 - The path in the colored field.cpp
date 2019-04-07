/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 10102 - The path in the colored field  #
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

    int m;
    while(cin>>m&&m!=EOF)
    {

        int threes[m*m],threes_pointer=0;
        int ones[m*m],ones_pointer=0;
        int max_dis=INT_MIN,min_dis=100000,dis;//dis for (distance)

        for(int i=0;i<m;i++)
        {
            string input_lines;
            cin>>input_lines;

            for(int j=0;j<m;j++)
            {
                if(input_lines[j]=='3')
                {
                    threes[threes_pointer++]=i;
                    threes[threes_pointer++]=j;

                }else if(input_lines[j]=='1')
                {
                    ones[ones_pointer++]=i;
                    ones[ones_pointer++]=j;
                }
            }
        }

        for(int i=0;i<ones_pointer-1;i+=2)
        {
            min_dis=INT_MAX;
            for(int j=0;j<threes_pointer-1;j+=2)
            {
                dis=abs(ones[i]-threes[j])+abs(ones[i+1]-threes[j+1]);
                min_dis=min(min_dis,dis);
            }
            max_dis=max(min_dis,max_dis);
        }

        cout<<max_dis<<endl;
    }
    return 0;
}
