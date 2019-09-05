#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>
#include <string>

using namespace std;

vector <int> lst;
vector <int> sol; //current solution in solve(func);

set<string> sol_set;//the set of all solution found;

int n,t;
void solve(int i,int curr)
{
    if(curr==t)
    {
        string s="";

        for(int j=0;j<sol.size();j++)
        {
            s+=to_string(sol[j]);
            s+="+";
        }

        s=s.substr(0,s.size()-1);
        sol_set.insert(s);

        return;
    }

    if(i==n)
        return;

    if(curr+lst[i]<=t)
    {

        sol.push_back(lst[i]);
        solve(i+1,curr+lst[i]);
        sol.pop_back();

    }

    solve(i+1,curr);


}

int main()
{
    int x;
    while(cin>>t>>n)
    {
        sol_set.clear();
        lst.clear();

        for(int i=0;i<n;i++)
        {
            cin>>x;
            lst.push_back(x);
        }

        solve(0,0);

        if(sol_set.empty())
        {
            cout<<"NONE\n";
            continue;
        }

        //printing output;
        printf("Sums of %d:\n",t);
        auto it = sol_set.end();
        it--;
        for(;it!=sol_set.begin();it--)
            cout<<*it<<endl;

        cout<<*it<<endl;
        //printing output;


    }

    return 0;
}
