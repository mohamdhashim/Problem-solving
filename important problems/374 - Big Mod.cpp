#include <iostream>
#include <string>
#include <set>
#include <vector>
//reading time : 7
//thinking time: 80
//coding time  : 50
using namespace std;

int mul_mod(int a, int b, int m)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        int n = mul_mod(a,b/2,m);
        return (n%m*n%m)%m;
    }
    return a%m*mul_mod(a,b-1,m)%m;
}

int main()
{
    int n,p,m;
    while(cin>>n)
    {
        cin>>p>>m;
        cout<<mul_mod(n,p,m)<<endl;
    }
}
