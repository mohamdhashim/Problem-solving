/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   : 451 B - Sort the Array                         #
# Github    : https://github.com/mohamdzezo                  #
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
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n],copy[n]; // copy = arr

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        copy[i]=arr[i];
    }

    sort(copy,copy+n);

    bool found=0; // check if there are at least 1 segment found can sort it
    int seg_begin=-1,seg_end=-1; //seg for segment

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=copy[i])
        {
            seg_begin=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!=copy[i])
        {
            seg_end=i;
            break;
        }
    }


    reverse(arr+seg_begin,arr+seg_end+1);

    for(int i=0;i<n;i++)
    {
        if(copy[i]!=arr[i])
        {
            cout<<"no";
            return 0;
        }
    }

    if(seg_begin==-1)
    {
        cout<<"yes\n";
        cout<<1<<" "<<1;
    }else
    {
        cout<<"yes\n";
        cout<<seg_begin+1<<" "<<seg_end+1;
    }

    return 0;
}
