/*************************************************************
# by        : mohamd abda alazez hashim                      #
# problem   : 230B - T-primes                                #
# Time(min) : reading : 10||thinking : 26||coding : 13       #
# level     : 6/10                                           #
*************************************************************/
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <fstream>
using namespace std;

int arr[1001], n, m;


bool solve(int sol) //sol ==> solution
{

    int i=0,sum=0;
    for(int v=0;v<m;v++)
    {
        while(i<n)
        {
            if(sum+arr[i]<=sol)
            {
                sum+=arr[i];
                i++;

            }
            else
            {
                sum=0;
                break;
            }

        }

    }

    return i==n;
}


int bin_search(int start ,int end)
{
    int mid;

    while(start<=end)
    {
        if(end-start==1)
            if(solve(start))
                return start;
            else
                return end;

        mid=(start+end)/2;

        if(solve(mid))
            end=mid;
        else
            start=mid;
    }

    return mid;
}




int main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);


    int res,bigest=0;

    while(EOF)
    {
        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            bigest=max(bigest,arr[i]);

        }

        if (m >= n) res = bigest;
        else res = bin_search(bigest,10000000);

        cout<<res<<endl;
    }

}
