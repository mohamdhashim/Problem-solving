/*************************************************************
# by        : mohamd abda alazez hashim                      #
# problem   : 472A - Design Tutorial: Learn from Math        #
# Time      : 15 min                                         #
*************************************************************/
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

bool prime(int n)
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
    cin>>n;


    for(int i=2;i<=n/2;i++)
        if(!prime(i)&&!prime(n-i))
        {
            cout<<i<<" "<<n-i;
            break;

        }


}
