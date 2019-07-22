//reading  time  : 14
//thinking time  : 56
//coding   time  : 10
// hard level    : 6/10
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    long long l,r;
    cin>>l>>r;

    if(r-l+1<3)
    {
        cout<<-1;
    }
    else
    {
        if(l%2==0)
            printf("%lld %lld %lld",l,l+1,l+2);
        else if(r-l+1>3)
            printf("%lld %lld %lld",l+1,l+2,l+3);
        else
            cout<<-1;


    }
}
