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
using namespace std;



bool prime(long long n)
{
    if(n==2)
        return 1;

    if(n<2||n%2==0)
        return 0;

    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return 0;

    return 1;

}



int main()
{
    int n;
    long long x;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;

        long long sqr = sqrt(x);

        if(sqr*sqr==x&&prime(sqrt(x)))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }



}
