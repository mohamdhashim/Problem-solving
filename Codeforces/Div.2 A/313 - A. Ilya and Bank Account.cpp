//reading : 6 min
//thinking : 5 min
//coding : 10min
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<0)
    {
        n=n*-1;
        if(n%10<(n/10)%10)
            n=((n/100)*10+n%10)*-1;
        else
            n=(n/10)*-1;

    }

    cout<<n;
}
