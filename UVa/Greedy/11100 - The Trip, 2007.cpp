/*************************************************************
# by        : mohamd abda alazez hashim                      #
# problem   : 11100 - The Trip, 2007                         #
# Time(min) : reading : 10||thinking : 26||coding : 13       #
# level     : 3/10                                           #
*************************************************************/
#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{
    int arr[1000001],n;
    while(cin>>n&&n)
    {
        int bags[n],max=0;
        for(int i=0;i<1000001;i++)
            arr[i]=0;


        for(int i=0;i<n;i++)
        {
            cin>>bags[i];
            arr[bags[i]]++;

            if(arr[bags[i]]>max)
                max=arr[bags[i]];
        }
        cout<<max<<endl;
        sort(bags,bags+n);
        for(int i=0;i<max;i++)
        {
            for(int j=i;j<n;j+=max)
            {
                if(j+max>=n)
                    cout<<bags[j]<<endl;
                else
                    cout<<bags[j]<<" ";

            }
        }
    }
}
