//reading 4
//thinking 13
//coding  3

#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

int fact (int n)
{
    if(n >= 1)
        return n*fact(n-1);

    return 1;
}


int main()
{
    int a,b;
    cin>>a>>b;

    cout<<fact(min(a,b));
}
