//using : backtracking 

#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int n;
vector <int> sol;
bool check[32];


bool isprime(int n)
{
    if((n>2&&n%2==0)||n==1)
    {
        return 0;
    }

    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
            return 0;
    }

    return 1;

}


void prime(int node)
{

    if(sol.size()==n)
    {
        if(isprime(sol[n-1]+sol[0]))
        {

            for(int j=0;j<n;j++)
            {
                cout<<sol[j]<<" ";
            }
            cout<<endl;
        }

        return ;
    }

    for(int i=1;i<=n;i++)
    {
        if(!check[i]&&isprime(i+node))
        {
            sol.push_back(i);
            check[i]=1;

            prime(i);

            check[i]=0;
            sol.pop_back();

        }

    }

}




int main()
{
    int head=1,Case=1;

    while(cin>>n)
    {
        printf("Case %d:\n",Case);
        sol.clear();
        memset(check,0,sizeof(check));

        sol.push_back(head);
        check[head]=1;

        prime(head);

        Case++;

    }


    return 0;
}
