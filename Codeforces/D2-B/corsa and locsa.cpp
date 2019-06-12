/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : B. corsa and locsa                             #
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

int main()
{
    int n; cin>>n;
    int arr[n],gab[n-1];//gab is difference between 2 elements in array 2 3 = -1
    int cost=0,pose=0; // pose (positive energy)

    for(int i=0;i<n;i++)
        cin>>arr[i];


    for(int i=0;i<n-1;i++)
        gab[i]=arr[i]-arr[i+1];


    for(int i=0;i<n-1;i++)
    {
        if(gab[i]>0)
            pose+=gab[i];
        else
        {
            if(pose==0)
                cost+=gab[i];
            else
            {
                pose+=gab[i];
                if(pose<0)
                {
                    cost+=pose;
                    pose=0;
                }
            }

        }
    }

    cout<<(cost*-1)+arr[0];


}
