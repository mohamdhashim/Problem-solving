#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    unsigned int n,k;
    while(cin>>n && n!=0)
    {
        k = sqrt(n);

        if(k*k==n)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }

    return 0;
}
